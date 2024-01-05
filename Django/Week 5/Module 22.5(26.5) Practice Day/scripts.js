// ================ Show category Section =======================
const loadCategory = () => {
  fetch("https://fakestoreapi.com/products/categories")
    .then((res) => res.json())
    .then((data) => showCategory(data));
};

const showCategory = (data) => {
  data?.forEach((singleData) => {
    const parent = document.getElementById("UL_category");
    const li = document.createElement("li");
    li.classList.add("list-unstyled");
    li.innerHTML = `
        <a class=" hvr-underline-from-center text-decoration-none text-dark categaytext" onclick='loadCategorySingle("${singleData}")'>${singleData}</a>
        `;
    parent.appendChild(li);
  });
};
// ================ Show Product Section =======================
const loadProduct = () => {
  fetch("https://fakestoreapi.com/products")
    .then((res) => res.json())
    .then((data) => showProducts(data));
};


const showProducts = (data) => {
    document.getElementById("slider2").innerHTML = "";

    data?.forEach((singleData) => {
        const parent = document.getElementById("slider2");
        const li = document.createElement("li");

        li.innerHTML = `
            <div class="card shadow h-100" onclick="handleItemClick('${singleData.id}')">
                <div class="ratio ratio-1x1 p-5">
                    <img src="${singleData.image}" class="card-img-top" loading="lazy" alt="...">
                </div>
                <div class="card-body d-flex flex-column flex-md-row">
                    <div class="flex-grow-1">
                        <strong>${singleData.title.slice(0, 20)}....</strong>
                        <p class="card-text">${singleData.description.slice(0, 50)}.....</p>
                    </div>
                    <div class="px-md-2">${singleData.price}</div>
                </div>
            </div>
        `;
        parent.appendChild(li);
    });
};

const loadCategorySingle = (data) =>{
    console.log(data);
    fetch(`https://fakestoreapi.com/products/category/${data}`)
            .then((res)=>res.json())
            .then((data)=>showProducts(data))
}

function handleItemClick(itemId) {
    window.open(`/details.html?id=${itemId}`, '_blank');
    fetch(`https://fakestoreapi.com/products/${itemId}`)
            .then(res=>res.json())
            .then(json=>console.log(json))
}



loadProduct();
loadCategory();
