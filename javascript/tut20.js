console.log("This is tutorial 20");
let impArray=["adarak","pyaz","bhindi"];
// Set item in local storage
localStorage.setItem("Name","Harry");
localStorage.setItem("Name2","Rishu");
localStorage.setItem("sabzi",JSON.stringify(impArray));
//  clearing local storage
// localStorage.clear();
// clearing a particular key value pair
// localStorage.removeItem('Name2');
// Get item in local storage
let name=localStorage.getItem("Name2");
 name=JSON.parse(localStorage.getItem("sabzi"));
// console.log(name);
sessionStorage.setItem("sName","sHarry");
sessionStorage.setItem("sName2","sRishu");
sessionStorage.setItem("ssabzi",JSON.stringify(impArray));
// sessionStorage.clear();