const loadAllUser = () => {
  fetch("https://fakestoreapi.com/users")
    .then((res) => res.json())
    .then((json) => showUsers(json));
};
const showUsers = (data) => {
  data?.forEach((singleData) => {
    const parent = document.getElementById("mainCard");
    const div = document.createElement("div");
    div.classList.add('user_single-card')
    div.innerHTML = `
        <div class="image-section-of-card">
        <img src="./3135715.png" alt="">
        </div>
        <div class="user-info-card">
        <h2>Name: ${singleData.name.firstname} ${singleData.name.lastname}</h2>
        <h3>Email: ${singleData.email}</h3>
        <h3>City: ${singleData.address.city}</h3>
        <a href="./viewuser.html?id=${singleData.id}">View User</a>
        </div>
    `;
        parent.appendChild(div)
  });
};

loadAllUser();
