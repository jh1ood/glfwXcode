#include <stdio.h>
#include <GLFW/glfw3.h>

int main(int argc, const char * argv[]) {
    
    glfwInit();
    GLFWwindow *const window = glfwCreateWindow(400, 400, "GLFW test", NULL, NULL);
    glfwMakeContextCurrent(window);
    
    while(glfwWindowShouldClose(window) == GL_FALSE) {
    
        glClearColor(0.5f, 0.6f, 0.6f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        glBegin(GL_TRIANGLES);
        {
            glColor3f ( 1.0f, 0.0f, 0.0f);
            glVertex3f( -0.5, -0.3, 0.0 );
            glColor3f ( 0.0f, 1.0f, 0.0f);
            glVertex3f(  0.0,  0.6, 0.0 );
            glColor3f ( 0.0f, 0.0f, 1.0f);
            glVertex3f(  0.5, -0.3 ,0.0 );
        }
        glEnd();
        glfwSwapBuffers(window);
        glfwWaitEvents();
    
    }
    
    return 0;
}
