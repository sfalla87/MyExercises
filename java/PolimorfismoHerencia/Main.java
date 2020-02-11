package PolimorfismoHerencia;

import java.util.ArrayList;

public class Main {
public static ArrayList<Objetos> O =new ArrayList<Objetos>();
	public static void main(String[] args) {
		// TODO Auto-generated method stub
Canvas canvas = new Canvas();
canvas.list.Add(new Gato());
canvas.list.Add(new Humano());
canvas.list.Add(new Perro());
canvas.Draw();

}

}
