console.log("This is tutorial 27");
// object literals for creating object
let car={
    name:"maruti 800",
    top_speed:89,
    run:function()
    {
        console.log("Car is running");
    }
}
// We have already seen a constructor like this
//  new Date();
// creating a constructor for cars
function GeneralCars(Givenname,topspeed)
{
    this.name=Givenname;
    this.speed=topspeed;
    this.run=function()
    {
        console.log(`${this.name} is running`);
    }
    this.Analyze=function(){

        console.log(`This car is slower ${600-this.speed}Km/H by mercedes`);
    }
}
car1=new GeneralCars("Audi",350);
car3=new GeneralCars("Mercedes",600);
car2=new GeneralCars("ferrari",450);
console.log(car1,car2,car3);