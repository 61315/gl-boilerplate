# gl-boilerplate

## GLFW + GLAD

| GL Version  | Windows | macOS    | Linux      |
| ----------- | ------- | -------- | ---------- |
| Legacy      | ✅      | ❌\*     | ✅         |
| GL 3.3 Core | ✅      | ✅\*\*   | ✅         |
| GL 4.1 Core | ✅      | ✅       | ✅         |
| GL 4.6 Core | ✅      | ❌\*\*\* | ⚠️\*\*\*\* |
| GLES 2.0    | ⚠️†     | ❌       | ⚠️‡        |
| GLES 3.0    | ⚠️†     | ❌       | ⚠️‡        |

```
* Legacy OpenGL not supported on modern macOS (10.14+)
** Requires forward compatible context
*** macOS only supports up to OpenGL 4.1
**** Requires recent GPU/driver with GL 4.6 support
† Requires proper drivers for GLES support (some of the latest AMD and NVIDIA drivers do)
‡ Mesa provides GLES support through translation layer or direct hardware support if available
```

## GLFW + GLAD2

| GL Version  | Windows | macOS    | Linux      |
| ----------- | ------- | -------- | ---------- |
| Legacy      | ✅      | ❌\*     | ✅         |
| GL 3.3 Core | ✅      | ✅\*\*   | ✅         |
| GL 4.1 Core | ✅      | ✅       | ✅         |
| GL 4.6 Core | ✅      | ❌\*\*\* | ⚠️\*\*\*\* |
| GLES 2.0    | ⚠️†     | ❌       | ⚠️‡        |
| GLES 3.0    | ⚠️†     | ❌       | ⚠️‡        |

```
* Legacy OpenGL not supported on modern macOS (10.14+)
** Requires forward compatible context
*** macOS only supports up to OpenGL 4.1
**** Requires recent GPU/driver with GL 4.6 support
† Requires proper drivers for GLES support (some of the latest AMD and NVIDIA drivers do)
‡ Mesa provides GLES support through translation layer or direct hardware support if available
```

## GLFW + GLAD2 (EGL)

These demos are bounded to fail as they explicitly request EGL contexts which these platforms do not natively support. 

| GL Version  | Windows | macOS    | Linux      |
| ----------- | ------- | -------- | ---------- |
| GLES 2.0    | ❌      | ❌       | ⚠️†        |
| GLES 3.0    | ❌      | ❌       | ⚠️†        |

```
† Again, Linux survives because Mesa provides a compliant EGL interface
```

### glfw_glad2_egl_200es.cpp

On Windows:
```
GLFW Error 65542: EGL: Library not found
Failed to create GLFW window
```

On macOS:
```
TODO:
```

On Linux (wsl):
```
EGL Version: 1.5
EGL Vendor: Mesa Project
EGL Version: 1.5
EGL Client APIs: OpenGL OpenGL_ES
GL Vendor: Microsoft Corporation
GL Renderer: D3D12 (AMD Radeon(TM) Graphics)
GL Version: OpenGL ES 3.1 Mesa 23.0.4-0ubuntu1~22.04.1
GLSL Version: OpenGL ES GLSL ES 3.10
Max Viewport Dimensions: 16384x16384
GLAD GLES version: 3.1
```

## GLAD2 + ANGLE (EGL)

| GL Version  | Windows | macOS    | Linux      |
| ----------- | ------- | -------- | ---------- |
| GLES 2.0    |         |          |            |
| GLES 3.0    |         |          |            |
