// exercise 1
// You have to create a variable which is string containing the text which is a link you are interested in 
// You have to fetch  all the links from a given page which contain this text
let a=document.links; 
Array.from(a).forEach(element => {
    if(element.href.includes("best")){
    console.log(element.href);
    }
    
});
// console.log(a);
