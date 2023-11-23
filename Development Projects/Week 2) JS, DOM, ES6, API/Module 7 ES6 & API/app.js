// // Key worrds
// let words = `This how we
//  can youse the
//   tampleate oparator`;

//   console.log(words);

// let arr = [1,3,4,3,4,3,43,4,2,32,323,23];

// console.log(...arr);

// // find the with the math
// console.log(Math.max(...arr));

// // Arrow Function
// function test(){
//     return "Hero";
// }

// console.log(test());

// const test2 = () => "his";
// console.log(test2());

// // Object and array Destructuring
// let arr = [1,2,4,4,534,24,23,23,5,346,62,56634,6667463];

// // destructuring
// const [fistValue, secondValue] = arr;

// console.log(fistValue,secondValue);

// let obj = {
//     name : "sifat islam",
//     age: 19,
//     friends:['ratul','bijoy','hafsa','tamim']
// }

// const {friends} = obj;
// console.log(friends[2]);

// Work of the map
// const num = [2, 2, 5, 6];

// const squre = num.map((x) => x * x);
// console.log(squre);

// Work of the filter
// const prodeucts = [
//   { id: 1, name: "Apple", price: 500, color: "golden" },
//   { id: 2, name: "Samsung", price: 700, color: "black" },
//   { id: 3, name: "Sony", price: 600, color: "silver" },
//   { id: 4, name: "Microsoft", price: 800, color: "blue" },
//   { id: 5, name: "LG", price: 550, color: "white" },
//   { id: 6, name: "Google", price: 900, color: "red" },
//   { id: 7, name: "HP", price: 750, color: "black" },
//   { id: 8, name: "Dell", price: 650, color: "silver" },
//   { id: 9, name: "Lenovo", price: 720, color: "blue" },
//   { id: 10, name: "Acer", price: 500, color: "white" },
//   { id: 11, name: "Asus", price: 850, color: "red" },
//   { id: 12, name: "Toshiba", price: 580, color: "black" },
//   { id: 13, name: "Panasonic", price: 780, color: "silver" },
//   { id: 14, name: "Fujitsu", price: 590, color: "blue" },
//   { id: 15, name: "Gateway", price: 700, color: "white" },
//   { id: 16, name: "Alienware", price: 950, color: "red" },
// ];


// const filterd_resutl = prodeucts.filter((pd) => pd.color == "black");
// console.log(filterd_resutl);


// Work t find funcgtin in 
// const result =prodeucts.find((pd) => pd.color == "blue");

// // console.log(result);

// const prodeuct_conainer = document.getElementById("item_show_container");
// const result3 = prodeucts.forEach((prodeuct) =>{
//     console.log(prodeuct);
//     const h1 = document.createElement("h1");
//     h1.innerText = prodeuct.name;
//     prodeuct_conainer.appendChild(h1);
// });


// // how can you factch data form server 
// fetch("https://fakestoreapi.com/products/1")
// .then(res => res.json())
// .then(data =>{
//     console.log(data);
// })

// .catch ((err)=>{
// console.log(err);
// })

// In here we will use async await and Promise

const loadData = async () => {
    try{
        const response = await fetch("https://fakestoreapi.com/products/1");
        const data = await response.json();
        console.log(data);
    }
    catch{
        (err) =>{
            console.log(err);
        }
    }
};
loadData();