// stdafx.h : 자주 사용하지만 자주 변경되지는 않는
// 표준 시스템 포함 파일 또는 프로젝트 관련 포함 파일이
// 들어 있는 포함 파일입니다.
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // 거의 사용되지 않는 내용은 Windows 헤더에서 제외합니다.
// Windows 헤더 파일:
#include <windows.h>

// C 런타임 헤더 파일입니다.
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <mmsystem.h>

// TODO: 프로그램에 필요한 추가 헤더는 여기에서 참조합니다.
#include <string>
#include <wrl.h>
#include <shellapi.h>
#include <d3d12.h>
#include <dxgi1_4.h>
#include <D3Dcompiler.h>
#include <DirectXMath.h>
#include <DirectXPackedVector.h>
#include <DirectXColors.h>
#include <DirectXCollision.h>
#include <stdint.h>
#include <imm.h>

#include <fstream>
#include <vector>
#include <random>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <chrono>
#include <queue>
#include <mutex>
#include <thread>
#include <queue>
#include <map>
#include<unordered_map>
#include<unordered_set>

#include <assert.h>
#include <algorithm>
#include <memory.h>
#include <wrl.h>

#pragma comment(lib, "ws2_32")
#include <WinSock2.h>

using namespace DirectX;
using namespace DirectX::PackedVector;
using Microsoft::WRL::ComPtr;

#pragma comment(lib, "d3dcompiler.lib")
#pragma comment(lib, "d3d12.lib")
#pragma comment(lib, "dxgi.lib")
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "imm32.lib")

#pragma comment(linker, "/entry:wWinMainCRTStartup /subsystem:console")
#include "../../Project_Server_IOCP/Project_Server_IOCP/Protocol.h"

#pragma comment(lib, "fmod64_vc.lib")
#pragma comment(lib, "fmodstudio64_vc.lib")
#include"fmod.hpp"
#include"fmod_errors.h"

#define FLAG		FORMAT_MESSAGE_ALLOCATE_BUFFER|FORMAT_MESSAGE_FROM_SYSTEM
#define LANG		MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT)

#define WM_SOCKET WM_USER+1
#define MAX_BUFFER 65536
#define MAX_PACKET 256

//#define _WITH_ONLY_RESIZE_BACKBUFFERS

#define FRAME_BUFFER_WIDTH 1280
#define FRAME_BUFFER_HEIGHT 720

#define MINIMAP_BUFFER_WIDTH 1280
#define MINIMAP_BUFFER_HEIGHT 720

#define CUBE_MAP_WIDTH 256
#define CUBE_MAP_HEIGHT 256

//#define FRAME_BUFFER_WIDTH 1600
//#define FRAME_BUFFER_HEIGHT 900

#define MOUSE_SENSITIVITY 8.0f
#define CURSOR_SENSITIVITY_X 5.0f
#define CURSOR_SENSITIVITY_Y 5.0f

#define GAME_TITLE "PillFighter "

// for Root Signature Index
#define MAX_ROOT_PARAMETER_INDEX					32

#define ROOT_PARAMETER_INDEX_OBJECT					0
#define ROOT_PARAMETER_INDEX_CAMERA					1
#define ROOT_PARAMETER_INDEX_LIGHTS					2
#define ROOT_PARAMETER_INDEX_DIFFUSE_TEXTURE_ARRAY	3
#define ROOT_PARAMETER_INDEX_SPECULAR_TEXTURE		4
#define ROOT_PARAMETER_INDEX_NORMAL_TEXTURE			5
#define ROOT_PARAMETER_INDEX_EMISSIVE_TEXTURE		6
#define ROOT_PARAMETER_INDEX_TEXTURE_CUBE			7
#define ROOT_PARAMETER_INDEX_UI_INFO				8	
#define ROOT_PARAMETER_INDEX_BONE_OFFSETS			9
#define ROOT_PARAMETER_INDEX_BONE_TRANSFORMS		10
#define ROOT_PARAMETER_INDEX_EFFECT					11
#define ROOT_PARAMETER_INDEX_SPRITE					12
#define ROOT_PARAMETER_INDEX_TILES					13
#define ROOT_PARAMETER_INDEX_PARTICLE				14
#define ROOT_PARAMETER_INDEX_INSTANCE				15
#define ROOT_PARAMETER_INDEX_ENVIRORMENTCUBE		16
#define ROOT_PARAMETER_INDEX_CURSOR_INFO			17
#define ROOT_PARAMETER_INDEX_SCENE_INFO				18
#define ROOT_PARAMETER_INDEX_CUSTOM_UI_INFO			19
#define ROOT_PARAMETER_INDEX_FONT_INFO				20
#define ROOT_PARAMETER_INDEX_SHADOW_MAP				21
#define ROOT_PARAMETER_INDEX_LIGHT_CAMERA_INFO		22
#define ROOT_PARAMETER_INDEX_MINIMAP_ENEMY_INFO		23
#define ROOT_PARAMETER_INDEX_PLAYER_INFO			24
#define ROOT_PARAMETER_INDEX_SCREEN_EFFECT			25
#define ROOT_PARAMETER_INDEX_UI_RELOAD_INFO			26
#define ROOT_PARAMETER_INDEX_UI_COLOR_INFO			27
#define ROOT_PARAMETER_INDEX_UI_3D_INFO				28
#define ROOT_PARAMETER_INDEX_NORMAL_MAP				29
#define ROOT_PARAMETER_INDEX_FOLLOW_EFFECT_INFO		30
#define ROOT_PARAMETER_INDEX_MINIMAP_TEAM_INFO		31

// for Compute Root Signature Index
#define MAX_COMPUTE_ROOT_PARAMETER_INDEX				7

#define COMPUTE_ROOT_PARAMETER_INDEX_INPUT_A			0
#define COMPUTE_ROOT_PARAMETER_INDEX_INPUT_B			1
#define COMPUTE_ROOT_PARAMETER_INDEX_INPUT_C			2
#define COMPUTE_ROOT_PARAMETER_INDEX_DEPTH				3
#define COMPUTE_ROOT_PARAMETER_INDEX_MASK				4
#define COMPUTE_ROOT_PARAMETER_INDEX_OUTPUT				5
#define COMPUTE_ROOT_PARAMETER_INDEX_MOTION_BLUR_INFO	6

// for Srv Descriptor Heap Count
constexpr int SCENE_BATTLE_COMMON_MODEL_SRV_COUNT = 6/*Bullets*/ + 6 /*Items*/ + 11 /*Robots*/ + 25 /*Weapons*/;
constexpr int SCENE_COLONY_MODEL_SRV_COUNT = 30/*Buildings*/ + 14/*Tiles*/;
constexpr int SCENE_SPACE_MODEL_SRV_COUNT = 22/*Buildings*/ + 4/*Event Object*/;
constexpr int SCENE_RTV_DESCRIPTOR_HEAP_COUNT = 10;
constexpr int SCENE_DSV_DESCRIPTOR_HEAP_COUNT = 4;

constexpr int SCENE_MODEL_SRV_DESCRIPTOR_HEAP_COUNT = SCENE_BATTLE_COMMON_MODEL_SRV_COUNT + SCENE_COLONY_MODEL_SRV_COUNT + SCENE_SPACE_MODEL_SRV_COUNT;
constexpr int SCENE_TEXTURE_SRV_DESCRIPTOR_HEAP_COUNT = 14/*Effects*/ + 3/*Font*/ + 1/*SkyBox*/ + 1 + /*Cursor*/ 29/*UIs*/ + 5/*Mini Map*/ + 29/*Room*/ + 12/*Main Lobby*/ + 3/*Team Name*/ + 6/*Title*/;
constexpr int SCENE_RTDS_TEXTURE_SRV_DESCRIPTOR_HEAP_COUNT = 8;
constexpr int SCENE_UAV_DESCRIPTOR_HEAP_COUNT = 4;

constexpr int MAX_SRV_DESCRIPTOR_HEAP_COUNT = SCENE_MODEL_SRV_DESCRIPTOR_HEAP_COUNT + SCENE_TEXTURE_SRV_DESCRIPTOR_HEAP_COUNT + SCENE_RTDS_TEXTURE_SRV_DESCRIPTOR_HEAP_COUNT;

// Object Type
#define OBJECT_TYPE_ROBOT 0x01

// Object State
#define OBJECT_STATE_ONGROUND		0x001
#define OBJECT_STATE_WALK			0x010
#define OBJECT_STATE_JUMP			0x020
#define OBJECT_STATE_BOOSTER		0x040
#define OBJECT_STATE_DASH			0x080
#define OBJECT_STATE_SHOOTING		0x100
#define OBJECT_STATE_SWORDING		0x200

// Weapon Type
#define WEAPON_TYPE_OF_SWORD		0x2000
#define WEAPON_TYPE_OF_SABER		0x0100
#define WEAPON_TYPE_OF_TOMAHAWK		0x0200

#define WEAPON_TYPE_OF_GUN			0x1000
#define WEAPON_TYPE_OF_GM_GUN		0x0001
#define WEAPON_TYPE_OF_BAZOOKA		0x0002
#define WEAPON_TYPE_OF_MACHINEGUN	0x0004
#define WEAPON_TYPE_OF_SMG			0x0008
#define WEAPON_TYPE_OF_BEAM_GUN		0x2000
#define WEAPON_TYPE_OF_BEAM_RIFLE	0x0010
#define WEAPON_TYPE_OF_BEAM_SNIPER	0x0020

// Animation State [ 애니메이션 상태값은 애니메이션이 있는 모델 파일을 읽었을 때 애니메이션의 인덱스와 같아야 함. ]
#define ANIMATION_DOWN 0
#define ANIMATION_UP 1

#define ANIMATION_STATE_IDLE 0
#define ANIMATION_STATE_WALK_FORWARD 1
#define ANIMATION_STATE_WALK_RIGHT 2
#define ANIMATION_STATE_WALK_LEFT 3
#define ANIMATION_STATE_WALK_BACKWARD 4
#define ANIMATION_STATE_JUMP 5
#define ANIMATION_STATE_LANDING 6
#define ANIMATION_STATE_DASH_FORWARD 7
#define ANIMATION_STATE_DASH_LEFT 8
#define ANIMATION_STATE_DASH_RIGHT 9
#define ANIMATION_STATE_DASH_BACKWARD 10
#define ANIMATION_STATE_GM_GUN_SHOOT_START 11
#define ANIMATION_STATE_SHOOT_ONCE 12
#define ANIMATION_STATE_GM_GUN_SHOOT_RETURN 13
#define ANIMATION_STATE_JUMP_LOOP 14
#define ANIMATION_STATE_DASH_FORWARD_LOOP 15
#define ANIMATION_STATE_DASH_LEFT_LOOP 16
#define ANIMATION_STATE_DASH_RIGHT_LOOP 17
#define ANIMATION_STATE_DASH_BACKWARD_LOOP 18
#define ANIMATION_STATE_BEAM_SABER_1_ONCE 19
#define ANIMATION_STATE_BEAM_SABER_2_ONCE 20
#define ANIMATION_STATE_BEAM_SABER_3_ONCE 21
// Upper Only
#define ANIMATION_STATE_DASH_SHOOT_START_ONCE 22
#define ANIMATION_STATE_SHOOT_DASH_ONCE 23
#define ANIMATION_STATE_DASH_SHOOT_RETURN_ONCE 24

#define MAX_CHARACTERS 3

// Lobby UI Click Type
#define LOBBY_KEYDOWN_CREATE_ROOM 1
#define LOBBY_MOUSE_CLICK_JOIN_ROOM 2
#define LOBBY_MOUSE_CLICK_ROOM_START 3
#define LOBBY_MOUSE_CLICK_ROOM_READY 4
#define LOBBY_MOUSE_CLICK_ROOM_LEAVE 5
#define LOBBY_MOUSE_CLICK_ROOM_SELECT_MAP 6
#define LOBBY_MOUSE_CLICK_ROOM_SELECT_ROBOT 7
#define LOBBY_MOUSE_CLICK_ROOM_CHANGE_TEAM_RED 8
#define LOBBY_MOUSE_CLICK_ROOM_CHANGE_TEAM_BLUE 9
#define LOBBY_KEYDOWN_CHANGE_NAME 10
#define LOBBY_MOUSE_CLICK_GAME_START 11
#define LOBBY_MOUSE_CLICK_GAME_EXIT 12
#define LOBBY_MOVE 13

///////////////////////////////////////
extern ID3D12Device *pDevice;
extern ID3D12GraphicsCommandList *pCommandList;
extern HWND ghwnd;

extern UINT	gnCbvSrvDescriptorIncrementSize;
extern UINT	gnRtvDescriptorIncrementSize;
extern UINT	gnDsvDescriptorIncrementSize;
extern SOCKET gSocket;
extern int gClientIndex;

extern ID3D12Resource *CreateBufferResource(ID3D12Device *pd3dDevice, ID3D12GraphicsCommandList *pd3dCommandList, void *pData, UINT nBytes, D3D12_HEAP_TYPE	d3dHeapType = D3D12_HEAP_TYPE_UPLOAD, D3D12_RESOURCE_STATES d3dResourceStates = D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER, ID3D12Resource **ppd3dUploadBuffer = NULL);
extern ID3D12Resource *CreateTextureResourceFromFile(ID3D12Device *pd3dDevice, ID3D12GraphicsCommandList *pd3dCommandList, const wchar_t *pszFileName, ID3D12Resource **ppd3dUploadBuffer, D3D12_RESOURCE_STATES d3dResourceStates = D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE);
extern ID3D12Resource *CreateTexture2DResource(ID3D12Device *pd3dDevice, ID3D12GraphicsCommandList *pd3dCommandList, UINT nWidth, UINT nHeight, DXGI_FORMAT dxgiFormat, D3D12_RESOURCE_FLAGS d3dResourceFlags, D3D12_RESOURCE_STATES d3dResourceStates, D3D12_CLEAR_VALUE *pd3dClearValue);
extern void TransitionResourceState(ID3D12GraphicsCommandList *pd3dCommandList, ID3D12Resource *pd3dBuffer, D3D12_RESOURCE_STATES d3dBefore, D3D12_RESOURCE_STATES d3dAfter);
extern std::string GetFileName(const std::string strFileName);
extern std::string GetFilePath(const std::string strFileName);
extern XMFLOAT2 CalculateCenter(float left, float right, float top, float bottom, bool isCenter = false);
extern XMFLOAT2 CalculateSize(float left, float right, float top, float bottom, bool isCenter = false);

extern int gnWndClientWidth;
extern int gnWndClientHeight;

#define EPSILON				1.0e-10f

#define RANDOM_COLOR		XMFLOAT4(rand() / float(RAND_MAX), rand() / float(RAND_MAX), rand() / float(RAND_MAX), rand() / float(RAND_MAX))
#define FPS					1.0f/60.0f

inline bool IsZero(float fValue) { return((fabsf(fValue) < EPSILON)); }
inline bool IsZero(float fValue, float fEpsilon) { return((fabsf(fValue) < fEpsilon)); }
inline bool IsEqual(float fA, float fB) { return(::IsZero(fA - fB)); }
inline bool IsEqual(float fA, float fB, float fEpsilon) { return(::IsZero(fA - fB, fEpsilon)); }
inline float InverseSqrt(float fValue) { return 1.0f / sqrtf(fValue); }
inline void Swap(float *pfS, float *pfT) { float fTemp = *pfS; *pfS = *pfT; *pfT = fTemp; }

//3차원 벡터의 연산
namespace Vector3
{
	inline XMFLOAT3 XMVectorToFloat3(XMVECTOR& xmvVector)
	{
		XMFLOAT3 xmf3Result;
		XMStoreFloat3(&xmf3Result, xmvVector);
		return(xmf3Result);
	}
	inline XMVECTOR XMFloat3ToVector(XMFLOAT3& xmfFloat3)
	{
		XMVECTOR xmvResult = XMLoadFloat3(&xmfFloat3);
		
		return(xmvResult);
	}

	inline XMFLOAT3 ScalarProduct(XMFLOAT3& xmf3Vector, float fScalar, bool bNormalize =
		true)
	{
		XMFLOAT3 xmf3Result;
		if (bNormalize)
			XMStoreFloat3(&xmf3Result, XMVector3Normalize(XMLoadFloat3(&xmf3Vector)) *
				fScalar);
		else
			XMStoreFloat3(&xmf3Result, XMLoadFloat3(&xmf3Vector) * fScalar);
		return(xmf3Result);
	}
	inline XMFLOAT3 Add(const XMFLOAT3& xmf3Vector1, const XMFLOAT3& xmf3Vector2)
	{
		XMFLOAT3 xmf3Result;
		XMStoreFloat3(&xmf3Result, XMLoadFloat3(&xmf3Vector1) +
			XMLoadFloat3(&xmf3Vector2));
		return(xmf3Result);
	}
	inline XMFLOAT3 Add(XMFLOAT3& xmf3Vector1, XMFLOAT3& xmf3Vector2, float fScalar)
	{
		XMFLOAT3 xmf3Result;
		XMStoreFloat3(&xmf3Result, XMLoadFloat3(&xmf3Vector1) + (XMLoadFloat3(&xmf3Vector2)
			* fScalar));
		return(xmf3Result);
	}
	inline XMFLOAT3 Subtract(XMFLOAT3& xmf3Vector1, XMFLOAT3& xmf3Vector2)
	{
		XMFLOAT3 xmf3Result;
		XMStoreFloat3(&xmf3Result, XMLoadFloat3(&xmf3Vector1) -	XMLoadFloat3(&xmf3Vector2));
		return(xmf3Result);
	}
	inline float DotProduct(XMFLOAT3& xmf3Vector1, XMFLOAT3& xmf3Vector2, bool bAngle = false)
	{
		XMFLOAT3 xmf3Result;
		XMStoreFloat3(&xmf3Result, XMVector3Dot(XMLoadFloat3(&xmf3Vector1),
			XMLoadFloat3(&xmf3Vector2)));

		if (bAngle)
			return acosf(xmf3Result.x);
		else
			return(xmf3Result.x);
	}
	inline XMFLOAT3 CrossProduct(XMFLOAT3& xmf3Vector1, XMFLOAT3& xmf3Vector2, bool
		bNormalize = true)
	{
		XMFLOAT3 xmf3Result;
		if (bNormalize)
			XMStoreFloat3(&xmf3Result,
				XMVector3Normalize(XMVector3Cross(XMLoadFloat3(&xmf3Vector1),
					XMLoadFloat3(&xmf3Vector2))));
		else
			XMStoreFloat3(&xmf3Result, XMVector3Cross(XMLoadFloat3(&xmf3Vector1),
				XMLoadFloat3(&xmf3Vector2)));
		return(xmf3Result);
	}
	inline XMFLOAT3 Normalize(XMFLOAT3& xmf3Vector)
	{
		XMFLOAT3 m_xmf3Normal;
		XMStoreFloat3(&m_xmf3Normal, XMVector3Normalize(XMLoadFloat3(&xmf3Vector)));
		return(m_xmf3Normal);
	}
	inline float Length(XMFLOAT3& xmf3Vector)
	{
		XMFLOAT3 xmf3Result;
		XMStoreFloat3(&xmf3Result, XMVector3Length(XMLoadFloat3(&xmf3Vector)));
		return(xmf3Result.x);
	}
	inline float Angle(XMVECTOR& xmvVector1, XMVECTOR& xmvVector2)
	{
		XMVECTOR xmvAngle = XMVector3AngleBetweenNormals(xmvVector1, xmvVector2);
		return(XMConvertToDegrees(acosf(XMVectorGetX(xmvAngle))));
	}
	inline float Angle(XMFLOAT3& xmf3Vector1, XMFLOAT3& xmf3Vector2)
	{
		return(Angle(XMLoadFloat3(&xmf3Vector1), XMLoadFloat3(&xmf3Vector2)));
	}
	inline XMFLOAT3 TransformNormal(XMFLOAT3& xmf3Vector, XMMATRIX& xmmtxTransform)
	{
		XMFLOAT3 xmf3Result;
		XMStoreFloat3(&xmf3Result, XMVector3TransformNormal(XMLoadFloat3(&xmf3Vector),
			xmmtxTransform));
		return(xmf3Result);
	}
	inline XMFLOAT3 TransformCoord(XMFLOAT3& xmf3Vector, XMMATRIX& xmmtxTransform)
	{
		XMFLOAT3 xmf3Result;
		XMStoreFloat3(&xmf3Result, XMVector3TransformCoord(XMLoadFloat3(&xmf3Vector),
			xmmtxTransform));
		return(xmf3Result);
	}
	inline XMFLOAT3 TransformCoord(XMFLOAT3& xmf3Vector, XMFLOAT4X4& xmmtx4x4Matrix)
	{
		return(TransformCoord(xmf3Vector, XMLoadFloat4x4(&xmmtx4x4Matrix)));
	}
}
//4차원 벡터의 연산
namespace Vector4
{
	inline XMFLOAT4 Add(XMFLOAT4& xmf4Vector1, XMFLOAT4& xmf4Vector2)
	{
		XMFLOAT4 xmf4Result;
		XMStoreFloat4(&xmf4Result, XMLoadFloat4(&xmf4Vector1) +
			XMLoadFloat4(&xmf4Vector2));
		return(xmf4Result);
	}
	inline XMFLOAT4 Multiply(XMFLOAT4& xmf4Vector1, XMFLOAT4& xmf4Vector2)
	{
		XMFLOAT4 xmf4Result;
		XMStoreFloat4(&xmf4Result, XMLoadFloat4(&xmf4Vector1) * XMLoadFloat4(&xmf4Vector2));
		return(xmf4Result);
	}

	inline XMFLOAT4 Multiply(float fScalar, XMFLOAT4& xmf4Vector)
	{
		XMFLOAT4 xmf4Result;
		XMStoreFloat4(&xmf4Result, fScalar * XMLoadFloat4(&xmf4Vector));
		return(xmf4Result);
	}

}
//행렬의 연산
namespace Matrix4x4
{
	inline XMFLOAT4X4 Identity()
	{
		XMFLOAT4X4 xmmtx4x4Result;
		XMStoreFloat4x4(&xmmtx4x4Result, XMMatrixIdentity());
		return(xmmtx4x4Result);
	}

	inline XMFLOAT4X4 Zero()
	{
		XMFLOAT4X4 xmf4x4Result;
		XMStoreFloat4x4(&xmf4x4Result, XMMatrixSet(0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f));
		return(xmf4x4Result);
	}

	inline XMFLOAT4X4 Multiply(XMFLOAT4X4& xmmtx4x4Matrix1, XMFLOAT4X4& xmmtx4x4Matrix2)
	{
		XMFLOAT4X4 xmmtx4x4Result;
		XMStoreFloat4x4(&xmmtx4x4Result, XMLoadFloat4x4(&xmmtx4x4Matrix1) *
			XMLoadFloat4x4(&xmmtx4x4Matrix2));
		return(xmmtx4x4Result);
	}

	inline XMFLOAT4X4 Multiply(XMFLOAT4X4& xmmtx4x4Matrix1, XMMATRIX& xmmtxMatrix2)
	{
		XMFLOAT4X4 xmmtx4x4Result;
		XMStoreFloat4x4(&xmmtx4x4Result, XMLoadFloat4x4(&xmmtx4x4Matrix1) * xmmtxMatrix2);
		return(xmmtx4x4Result);
	}

	inline XMFLOAT4X4 Multiply(XMMATRIX& xmmtxMatrix1, XMFLOAT4X4& xmmtx4x4Matrix2)
	{
		XMFLOAT4X4 xmmtx4x4Result;
		XMStoreFloat4x4(&xmmtx4x4Result, xmmtxMatrix1 * XMLoadFloat4x4(&xmmtx4x4Matrix2));
		return(xmmtx4x4Result);
	}

	inline XMFLOAT4X4 Inverse(XMFLOAT4X4& xmmtx4x4Matrix)
	{
		XMFLOAT4X4 xmmtx4x4Result;
		XMStoreFloat4x4(&xmmtx4x4Result, XMMatrixInverse(NULL,
			XMLoadFloat4x4(&xmmtx4x4Matrix)));
		return(xmmtx4x4Result);
	}

	inline XMFLOAT4X4 Transpose(XMFLOAT4X4& xmmtx4x4Matrix)
	{
		XMFLOAT4X4 xmmtx4x4Result;
		XMStoreFloat4x4(&xmmtx4x4Result,
			XMMatrixTranspose(XMLoadFloat4x4(&xmmtx4x4Matrix)));
		return(xmmtx4x4Result);
	}

	inline XMFLOAT4X4 PerspectiveFovLH(float FovAngleY, float AspectRatio, float NearZ,	float FarZ)
	{
		XMFLOAT4X4 xmmtx4x4Result;
		XMStoreFloat4x4(&xmmtx4x4Result, XMMatrixPerspectiveFovLH(FovAngleY, AspectRatio,
			NearZ, FarZ));
		return(xmmtx4x4Result);
	}

	inline XMFLOAT4X4 OrthogonalFovLH(float fWidth, float fHeight, float fNear, float fFar)
	{
		XMFLOAT4X4 xmmtx4x4Result;
		XMStoreFloat4x4(&xmmtx4x4Result, XMMatrixOrthographicLH(fWidth, fHeight, fNear, fFar));
		return(xmmtx4x4Result);
	}

	inline XMFLOAT4X4 LookAtLH(XMFLOAT3& xmf3EyePosition, XMFLOAT3& xmf3LookAtPosition,	XMFLOAT3& xmf3UpDirection)
	{
		XMFLOAT4X4 xmmtx4x4Result;
		XMStoreFloat4x4(&xmmtx4x4Result, XMMatrixLookAtLH(XMLoadFloat3(&xmf3EyePosition),
			XMLoadFloat3(&xmf3LookAtPosition), XMLoadFloat3(&xmf3UpDirection)));
		return(xmmtx4x4Result);
	}

	inline XMFLOAT4X4 Scale(XMFLOAT4X4& xmf4x4Matrix, float fScale)
	{
		XMFLOAT4X4 xmf4x4Result;
		XMStoreFloat4x4(&xmf4x4Result, XMLoadFloat4x4(&xmf4x4Matrix) * fScale);
		/*
				XMVECTOR S, R, T;
				XMMatrixDecompose(&S, &R, &T, XMLoadFloat4x4(&xmf4x4Matrix));
				S = XMVectorScale(S, fScale);
				T = XMVectorScale(T, fScale);
				R = XMVectorScale(R, fScale);
				//R = XMQuaternionMultiply(R, XMVectorSet(0, 0, 0, fScale));
				XMStoreFloat4x4(&xmf4x4Result, XMMatrixAffineTransformation(S, XMVectorZero(), R, T));
		*/
		return(xmf4x4Result);
	}

	inline XMFLOAT4X4 Interpolate(XMFLOAT4X4& xmf4x4Matrix1, XMFLOAT4X4& xmf4x4Matrix2, float t)
	{
		XMFLOAT4X4 xmf4x4Result;
		XMVECTOR S0, R0, T0, S1, R1, T1;
		XMMatrixDecompose(&S0, &R0, &T0, XMLoadFloat4x4(&xmf4x4Matrix1));
		XMMatrixDecompose(&S1, &R1, &T1, XMLoadFloat4x4(&xmf4x4Matrix2));
		XMVECTOR S = XMVectorLerp(S0, S1, t);
		XMVECTOR T = XMVectorLerp(T0, T1, t);
		XMVECTOR R = XMQuaternionSlerp(R0, R1, t);
		XMStoreFloat4x4(&xmf4x4Result, XMMatrixAffineTransformation(S, XMVectorZero(), R, T));
		return(xmf4x4Result);
	}

	inline XMFLOAT4X4 Add(XMFLOAT4X4& xmmtx4x4Matrix1, XMFLOAT4X4& xmmtx4x4Matrix2)
	{
		XMFLOAT4X4 xmf4x4Result;
		XMStoreFloat4x4(&xmf4x4Result, XMLoadFloat4x4(&xmmtx4x4Matrix1) + XMLoadFloat4x4(&xmmtx4x4Matrix2));
		return(xmf4x4Result);
	}
}
