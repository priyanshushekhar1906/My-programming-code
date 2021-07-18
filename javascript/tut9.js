console.log("This is tutorial 9");
let i=0;
while(i<10)
{
    i++;
   if(i==5)
   {
       continue;
   }
    
    // console.log(i);  
}

let array=[1,23,4,5,64,3];
// for (let index = 0; index < array.length; index++) {
//     // const element = array[index];
//     // console.log(element);
    
// }

array.forEach(function (element,index,array) {
    console.log(element+" is at index "+index +" "+array);
    
});

let obj={

    name:"harry",
    os:"Ubuntu",
    age:78,
    Nickname:"Sir",
    "Last Name":"Bhai"
};
for (let key in obj) {
    
         const element = obj[key];
         console.log(`The ${key}  of object is `+element);
        }
