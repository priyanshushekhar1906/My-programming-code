// type conversion and type coercion 

// Type conversion
console.log("Welcome to tut5");
let myVar;
myVar=String(34);
console.log(myVar,typeof(myVar));
let booleanVar=String(true);
// console.log(booleanVar,typeof(booleanVar));

let date=String(new Date());
console.log(date,typeof(date));

let arr=String([1,2,3,4,5,6]);
console.log(arr.length,typeof(arr));

let i=90;
console.log(i.toString());

let stri=Number("3434");
//  stri=Number("34a34");   not a number
// stri=Number(true);
// stri=Number([3,4,45,5,6]);
console.log(stri,typeof(stri));

let number=parseInt('34.098');
// number=parseFloat('34.098');
console.log(number.toFixed(8),typeof(number));

// Type coercion 
let myStr=Number("698");
let myNum=34;
console.log(myStr+myNum);


