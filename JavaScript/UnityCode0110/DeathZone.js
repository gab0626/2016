﻿#pragma strict

public static var dead : boolean;

function Start () {
	dead = false;
}

function Update () {

}

function OnTriggerEnter(col:Collider){
	if(col.gameObject.tag == "Hiyoko")
	{
		UiController.gameOver = true;
		dead = true;
	}
}