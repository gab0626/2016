﻿#pragma strict

public var sceneName : String;

function LoadGame(){
	
	UiController.gameOver = false;
	Application.LoadLevel(sceneName);
	Score.score = 0;

}

function Start () {

}

function Update () {

}