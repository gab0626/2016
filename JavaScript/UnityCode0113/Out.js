﻿#pragma strict

function Start () {

}

function Update () {

}

function OnTriggerEnter(col:Collider){
	
	if(col.gameObject.tag == "Player")
	{
		Application.LoadLevel(Application.loadedLevel);
	}
}