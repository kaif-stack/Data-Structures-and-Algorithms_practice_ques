#include <bits/stdc++.h>

uniform mat4 mvp;
uniform float sway;

layout (location = 0) in vec3 aPosition;

void main()
{
    vec3 position = aPosition;
    gl_Position = mvp*vec4(position, 1.0);
}