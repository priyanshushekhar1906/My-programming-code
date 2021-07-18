// REGULAR EXPRESSION

console.log('This is tutorial 46');

// Let the us consider we have a bigger string

let reg=/harry/;                                   //   /harry/<-- this is called regular expression literals
 reg=/harry/g;    //g means global flag                              
//  reg=/harry/i;    //i means case insensitive flag                             

// console.log(reg);
// console.log(reg.source);

let s="This is great code with harry and also harry bhai";

// // Function to match expressions  
// 1.exec()  -- This function will return an array for match or null for no match

let result=reg.exec(s);
// result=reg.exec(s);
console.log(result);
//  result=reg.exec(s);
// console.log(result);  //we can use multiple exec with global flag
// if(result){
// console.log(result.input);
// console.log(result.index);
// }

// 2.test()-Return true or false

let result1=reg.test(s);

console.log(result1);  //This will only print true if the reg is there in the string s

// 3.match  It will return  array of result or null 

// let result3=reg.match(s);  //This is wrong
let result3=s.match(reg);  //This is right

console.log(result3)



// 4.Search()   Returns index of first match or -1


let result4=s.search(reg);
console.log(result4)


// 5. replace() --return new replaced string with all the replacements  (if no global flag is given,first flag match will be replaced)

let result5=s.replace(reg,"SHUBHAM");

console.log(result5);