// // Type castion in js
// let n = 100;
// let n2 = 200.55;
// let n3 = "sifath";
// let n4 = "1000.54535434"


// console.log(n + n2);
// console.log(parseInt(n + n2));
// console.log(n3 + n4);
// console.log(parseFloat(n4).toFixed(2));


// // If else condition on js 
// let num  = 100;

// if(num >= 1000){
//     console.log("My papah got money");
// }
// else if(num == 10001){
//     console.log("MY papah got bashi money");
// }
// else{
//     console.log("ami gorib");
// }


// Object on js 
let sifat = {
    fullName: "Sifat Islam",
    age: 19,
    skinColor: "Dark Shamla",
    ProgrammingSkill:{
        languges: ["c","c++","python","javascript"],
        course: "running course in phitron"
    }
}

console.log(sifat);
console.log(sifat.fullName);
console.log(sifat.ProgrammingSkill.course);
console.log(sifat.ProgrammingSkill.languges);
console.log(Object.values(sifat.ProgrammingSkill));