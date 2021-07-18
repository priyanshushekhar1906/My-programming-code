console.log("We are in tut7.js and lets discuss arrays");
let marks=[1,2,3,4,5,6];
const fruits=["mango",'orange',"Apple"];
const mixes=['str',89,[3,5]];

const arr=new Array(21,23,4,3);
// console.log(arr);
console.log(marks);
// console.log(marks,fruits,mixes);
// console.log(fruits[2]);
// // Array property
// console.log(fruits.length);
// // Array Method
// console.log(Array.isArray(arr));
arr[0]="harry";
// console.log(arr);
let value=marks.indexOf(6);
// console.log(value);

// Mutating or modifying arrays
// marks.push(34);
// marks.unshift(420);
// marks.pop();
// marks.shift();
// marks.splice(2,3);
// marks.reverse();
marks2=[1,4,44,23];
marks=marks.concat(marks2);
console.log(marks);


// Object

let myobj={

    "first name":"chotu",
    channel:"Coderbro",
    marks:[99,89,90],
    isActive:true
};
console.log(myobj);
console.log(myobj["first name"]);
console.log(myobj['channel']);
console.log(myobj.channel);
console.log(myobj.marks);
console.log(myobj.isActive);
