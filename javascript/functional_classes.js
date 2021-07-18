function shape(type){
    this.type=type;
    this.s1=1;
    this.s2=1;
    this.getArea=function(){
        return `Area of this ${this.type} is `+this.s1*this.s2;
    }
}

let rectangle=new shape('rectangle');
rectangle.s1=2;
rectangle.s2=3;
console.log(rectangle.getArea());
let square=new shape('Square');
square.s1=square.s2=13;
console.log(square.getArea());