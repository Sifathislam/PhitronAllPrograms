// ============ Show services Section =================
const loadServices = () =>{
    fetch("https://testing-8az5.onrender.com/services/")
    .then((res) => res.json())
    .then((data) => showServices(data))
}

const showServices = (data) =>{
    data?.forEach(singleData => {
        const parent = document.getElementById("slider2")
        const li = document.createElement('li')

        li.innerHTML = `
            <div class="card shadow h-100" onclick="handleItemClick('${singleData.id}')">
            <div class="ratio ratio-1x1 p-5">
                <img src="${singleData.image}" class="card-img-top" loading="lazy" alt="...">
            </div>
            <div class="card-body d-flex flex-column flex-md-row">
                <div class="flex-grow-1">
                    <strong>${singleData.name}</strong>
                    <p class="card-text">${singleData.description.slice(0, 50)}.....</p>
                </div>
            </div>
        </div>
        `;
        parent.appendChild(li)
    });
} 







loadServices()