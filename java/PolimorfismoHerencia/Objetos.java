package PolimorfismoHerencia;

public abstract class Objetos {
protected double x0;
protected double x1;
protected double y0;
protected double y1;
protected double altura;
protected double largo;

Objetos(){
	
}
proteected Objetos(double x0, double x1, double y0, double y1){
	this.x0=x0;
this.x1=x1;
this.y0=y0;
this.y1=y1;
}
public double getx0() {
	return x0;
}
public void setx0(double x0) {
	this.x0=x0;
}
public double getx1(){
return x1;
}
public void setx1(double x1){
this.x1=x1;
}
public double gety0(){
return y0;
}
public void sety0(double y0){
this.y0=y0;
}
public double gety1(){
return y1;
}
public void sety1(double y1){
this.y1=y1;
}
public duble altura(double y0, y1){
altura=y1-y0;
return altura;
}
public double largo(x0,x1){
largo=x1-x0;
}




}




}
