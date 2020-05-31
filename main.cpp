#include <GLFW/glfw3.h>
#include <vulkan/vk_layer.h>
#include <vulkan/vk_layer.h>

#include <iostream>
#include <vector>
#include "stb_image.h"
#include "tiny_gltf.h"

int main()
{
    const char* appName = "Hello, Vulkan";
    std::vector<const char*> extensions;


    VkApplicationInfo appInfo{};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pApplicationName = appName;
    appInfo.pEngineName = appName;
    appInfo.apiVersion = VK_API_VERSION_1_2;
    appInfo.engineVersion = VK_MAKE_VERSION(1, 2, 0);
}

