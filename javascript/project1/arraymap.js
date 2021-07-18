// const oldarr=['vinod','bahadur',"Thapa"];
// console.log(oldarr[0]);
// console.log(oldarr[1]);
// console.log(oldarr[2]);
// const newarray=oldarr.map(function(cvalue,i,array){
//     return i+": "+ cvalue+"singh ";
// })
// console.log(newarray);
// console.log(oldarr);
const studentdata=[
    {id:1,name:"vinod",degree:"Mcs"},
    {id:2,name:"chotu",degree:"Bcs"},
    {id:3,name:"priyanshu",degree:"cs"},
];
// console.log(studentdata[0]);
// console.log(studentdata[1].degree);
// console.log(studentdata[2].name);
const newdata=studentdata.map((cvalue)=>{

    return `My name is ${cvalue.name} & My highest degree is ${cvalue.degree }`;
});
console.log(newdata);