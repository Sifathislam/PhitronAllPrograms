const leadData = (global) => {
  const user_search_text = document.getElementById("search_value").value;
  fetch(
    `https://www.themealdb.com/api/json/v1/1/search.php?f=${user_search_text ? user_search_text: global}`
    )
    .then((res) => res.json())
    .then((data) => displayMeal(data.meals));
    
    document.getElementById("search_value").value = "";
  };
  
  const displayMeal = (data) => {
  document.getElementById("total_meals").innerText = data.length;
  
  const mealContainer = document.getElementById("meal_container");
  
  data.forEach((meal) => {
    // console.log(meal);
    const card = document.createElement("div");
    card.classList.add("box");
    card.innerHTML = `
    <img src="${meal.strMealThumb}" alt="">
    <h2>${meal?.strMeal}</h2>
        <p>${meal?.strInstructions.slice(0, 50)}</p>
        <button type="button" class="btn btn-primary" 
        onclick ="displayModal('${meal.idMeal}')"
        data-bs-toggle="modal" data-bs-target="#staticBackdrop">
        Details
        </button>
        `;
        mealContainer.appendChild(card);
      });
    };
    
    const displayModal = async(id) => {
    try{
        const response = await fetch(`https://www.themealdb.com/api/json/v1/1/lookup.php?i=${id}`);
        const data = await response.json();
        console.log(data.meals[0]);
      }
      catch{
        err => {
          console.log(err);
        }
      }
      
    };


// add event listener for the enter click and search     
const button0fevent = document.getElementById("search_value");
button0fevent.addEventListener("keydown",function(event){
  if(event.keyCode === 13){
    leadData();

    event.preventDefault();
  }
});
    
    leadData("a")