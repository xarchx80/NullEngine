#pragma once

#define _CRT_SECURE_WARNINGS
#define WIN32_LEAN_AND_MEAN

#include <string>
#include <vector>
#include <memory>

#include <Core/TypeDecl.h>
#include <Core/Type.h>
#include <Core/Log.h>
#include <Math/LinearMath.h>
#include <Math/mat4x4.h>

#define SAFE_RELEASE(x) if(x) {x->Release(); x = nullptr;}
#define SAFE_DELETE(x) if(x) {delete x; x = nullptr;}

