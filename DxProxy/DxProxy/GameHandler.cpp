/********************************************************************
Vireio Perception: Open-Source Stereoscopic 3D Driver
Copyright (C) 2013 Chris Drain

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
********************************************************************/

#include "GameHandler.h"

GameHandler::GameHandler() 
{
	//TODO implementation
}

GameHandler::~GameHandler()
{

}


GameHandler* GameHandler::Load(std::string gameId)
{
	//TODO implementation
	return NULL;
}

GameHandler* GameHandler::Load(/* std::string gameId and file*/)
{
	//TODO implementation
	return NULL;
}



bool GameHandler::ShouldDuplicateRenderTarget(UINT Width, UINT Height, D3DFORMAT Format, D3DMULTISAMPLE_TYPE MultiSample,
									DWORD MultisampleQuality,BOOL Lockable,IDirect3DSurface9** ppSurface,HANDLE* pSharedHandle, bool isSwapChainBackBuffer)
{
	//TODO implementation
	return true;
}

bool GameHandler::ShouldDuplicateTexture(UINT Width,UINT Height,UINT Levels,DWORD Usage,D3DFORMAT Format,D3DPOOL Pool,IDirect3DTexture9** ppTexture,HANDLE* pSharedHandle)
{
	//TODO implementation
	return true;
}

bool GameHandler::ShouldDuplicateCubeTexture(UINT EdgeLength, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, IDirect3DCubeTexture9** ppCubeTexture, HANDLE* pSharedHandle)
{
	//TODO implementation
	return true;
}

float GameHandler::ToWorldUnits(float millimeters)
{
	float result = 0.0f;

	//TODO implementation

	return result;
}

ShaderModificationRepository* GameHandler::GetShaderModificationRepository()
{
	//TODO implementation
	return NULL;
}