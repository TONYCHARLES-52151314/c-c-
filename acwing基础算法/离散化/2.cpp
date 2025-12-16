#include <iostream>
#include <string>
#include <cmath>

// Set console text color to red
void setColor() {
    system("color 0C"); // Black background, red text
}

// Draw heart using ASCII characters
void drawAsciiHeart() {
    std::string heart[] = {
        "     ******     ******     ",
        "   ********** **********   ",
        " ************ ************ ",
        "**************************",
        "**************************",
        " ************************  ",
        "  **********************   ",
        "   ********************    ",
        "    ******************     ",
        "     ****************      ",
        "      **************       ",
        "       ************        ",
        "        **********         ",
        "         ********          ",
        "          ******           ",
        "           ****            ",
        "            **             "
    };
    
    // Print heart
    for (const auto& line : heart) {
        std::cout << line << std::endl;
    }
}

// 使用参数方程计算爱心形状，并在控制台中使用字符填充
void drawParametricHeart(int size = 10) {
    const int width = 80;
    const int height = 40;
    
    // 创建一个二维数组来表示屏幕
    char screen[height][width] = {0};
    
    // 填充屏幕为空格
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            screen[y][x] = ' ';
        }
    }
    
    // 爱心参数方程的参数范围
    for (double t = 0; t <= 2 * M_PI; t += 0.01) {
        // 爱心参数方程
        double x = 16 * pow(sin(t), 3);
        double y = 13 * cos(t) - 5 * cos(2*t) - 2 * cos(3*t) - cos(4*t);
        
        // 转换到屏幕坐标
        int screenX = width / 2 + static_cast<int>(x * size / 16);
        int screenY = height / 2 - static_cast<int>(y * size / 16);
        
        // 确保在屏幕范围内
        if (screenX >= 0 && screenX < width && screenY >= 0 && screenY < height) {
            screen[screenY][screenX] = '*';
            // 简单填充
            if (screenX + 1 < width) screen[screenY][screenX + 1] = '*';
            if (screenX - 1 >= 0) screen[screenY][screenX - 1] = '*';
        }
    }
    
    // 输出爱心
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            std::cout << screen[y][x];
        }
        std::cout << std::endl;
    }
}

int main() {
    // 使用system命令设置UTF-8编码
    system("chcp 65001");
    
    // 设置红色文本
    setColor();
    
    std::cout << "===== Red Heart Drawing Program =====" << std::endl;
    std::cout << "Compiled and run with VSCode, no graphics library needed" << std::endl;
    std::cout << "\n" << std::endl;
    
    // 绘制ASCII爱心
    drawAsciiHeart();
    
    std::cout << "\n" << std::endl;
    
    // 绘制参数方程爱心
    drawParametricHeart(5);
    
    std::cout << "\n\nPress Enter to exit..." << std::endl;
    std::cin.get();
    
    // 恢复默认颜色
    system("color 07");
    
    return 0;
}