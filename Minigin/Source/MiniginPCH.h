#pragma once

#include <stdio.h>
#include <iostream> // std::cout
#include <sstream> // stringstream
#include <memory> // smart pointers
#include <vector>
#include "vld.h"

#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <SDL.h>

#pragma comment(lib, "SDL2_mixer.lib")  
#include "../SDL2_mixer/include/SDL_mixer.h"

#pragma comment (lib,"opengl32.lib")
#pragma comment (lib,"Glu32.lib")

#include <SDL_opengl.h>
#include <GL\GLU.h>

#pragma comment(lib, "SDL2_image.lib")  
#include "../SDL2_image/include/SDL_image.h"


#include "MainStructs.h"
#include "Devlog.h"
#include "Renderer.h"
#include "Minigin.h"
#include "GameTime.h"
#include "SceneManager.h"
#include "../../Game/MainGame.h"
#include "WorldPhysics.h"

#define DEBUGLOG dae::Devlog::GetInstance()
#define RENDERER dae::Renderer::GetInstance()
#define ENGINE dae::Engivan::GetInstance()
#define GAME dae::MainGame::GetInstance()
#define SCENEMANAGER dae::SceneManager::GetInstance()
#define TIME dae::GameTime::GetInstance()
#define PHYSICS dae::WorldPhysics::GetInstance()

#define PI 3.1415926535f
