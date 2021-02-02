#pragma once
#include <d3d9.h>
#include <d3dx9core.h>

typedef IDirect3D9* (STDMETHODCALLTYPE *DIRECT3DCREATE9)(UINT);
typedef HRESULT(WINAPI* pPresent)(LPDIRECT3DDEVICE9 pDevice, CONST RECT*, CONST RECT*, HWND, LPVOID);
typedef HRESULT(WINAPI* pReset)(LPDIRECT3DDEVICE9 pDevice, D3DPRESENT_PARAMETERS* pPresentationParameters);
typedef DWORD(STDMETHODCALLTYPE *GETPROCESSHEAPS)(DWORD, PHANDLE);
typedef IDirect3DDevice9* D3D9DevPtr;
typedef HRESULT(WINAPI* pDrawIndexedPrimitive)(LPDIRECT3DDEVICE9, D3DPRIMITIVETYPE, int, UINT, UINT, UINT, UINT);
typedef HRESULT(WINAPI* pEndScene)(LPDIRECT3DDEVICE9 pDev);
typedef HRESULT(WINAPI* pReset)(LPDIRECT3DDEVICE9, D3DPRESENT_PARAMETERS*);


HRESULT GenerateTexture(IDirect3DDevice9 *pD3Ddev, IDirect3DTexture9 **ppD3Dtex, DWORD colour32);

