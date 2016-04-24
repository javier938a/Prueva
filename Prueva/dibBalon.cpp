#include <GL/glut.h>
#include <GL/gl.h>
#include <cmath>
//hecho por Carlos Javier Ochoa Torres y Jacob Isaac Alvarenga Menjivar
//
void display(void){
	glClear(GL_COLOR_BUFFER_BIT);     
        glBegin(GL_POINTS);
          for(GLfloat x = 2.25;x<=13.75;x+=0.0001){//Dibujando el contorno de balon de futbol utilizando la ecuasion canonica de la circunferencia
              GLfloat base = 33.0625-pow((x-8),2);
              GLfloat ypos = pow(base,0.5)+6.75;
              GLfloat yneg = -1*pow(base,0.5)+6.75;
              glVertex3f(x,ypos,0.0f);
              glVertex3f(x,yneg,0.0f);
           }
        glEnd();
        glShadeModel(GL_FLAT);
        glBegin(GL_POLYGON);
        //Primer exagono 
		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex3f(7.9f,4.2f,0.0f);
		glVertex3f(10.2f,5.1f,0.0f); 
		glVertex3f(10.8f,7.7f,0.0f);
		glVertex3f(8.3f,9.2f,0.0f);
		glVertex3f(6.0f,8.2f,0.0f);
		glVertex3f(5.8f,5.7f,0.0f); 
		glEnd();
	glBegin(GL_POLYGON);
         //Segundo exagono 
		glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f(6.0f,8.2f,0.0f);
		glVertex3f(4.8f,9.5f,0.0f); 
		glVertex3f(3.1f,8.3f,0.0f);
		glVertex3f(3.0f,6.0f,0.0f);
		glVertex3f(4.3f,4.6f,0.0f);
		glVertex3f(5.8f,5.7f,0.0f);
        glEnd();
	glBegin(GL_POLYGON);
         //dibujando primer pentagono
		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex3f(10.2f,5.1f,0.0f);
		glVertex3f(11.9f,4.2f,0.0f); 
		glVertex3f(13.0f,6.1f,0.0f);
		glVertex3f(12.3f,8.3f,0.0f);
		glVertex3f(10.8f,7.7f,0.0f);
	
        glEnd();
	glBegin(GL_POLYGON);
         //tercer exagono 
		glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f(12.3f,8.3f,0.0f);
		glVertex3f(12.0f,10.2f,0.0f); 
		glVertex3f(10.0f,11.5f,0.0f);
		glVertex3f(8.1f,11.1f,0.0f);
		glVertex3f(8.3f,9.2f,0.0f);
		glVertex3f(10.8f,7.7f,0.0f);
        glEnd();
	glBegin(GL_POLYGON);
         //dibujando segundo pentagono
		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex3f(8.1f,11.1f,0.0f);
		glVertex3f(6.0f,11.3f,0.0f); 
		glVertex3f(4.8f,9.5f,0.0f);
		glVertex3f(6.0f,8.2f,0.0f);
		glVertex3f(8.3f,9.2f,0.0f);
	
        glEnd();
	glBegin(GL_POLYGON);
         //dibujando tercer pentagono
		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex3f(5.1f,2.5f,0.0f);
		glVertex3f(7.5f,2.2f,0.0f); 
		glVertex3f(7.9f,4.2f,0.0f);
		glVertex3f(5.8f,5.7f,0.0f);
		glVertex3f(4.3f,4.6f,0.0f);
	
        glEnd();
	glBegin(GL_POLYGON);
         //cuarto exagono 
		glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f(7.5f,2.2f,0.0f);
		glVertex3f(9.2f,1.4f,0.0f); 
		glVertex3f(11.4f,2.4f,0.0f);
		glVertex3f(11.9f,4.2f,0.0f);
		glVertex3f(10.2f,5.1f,0.0f);
		glVertex3f(7.9f,4.2f,0.0f);
        glEnd();
        glBegin(GL_LINES);
        	glVertex3f(9.2f,1.4f,0.0f);
                glVertex3f(9.0f,1.1f,0.0f);
                
                glVertex3f(11.4f,2.4,0.0f);
                glVertex3f(12.0f,2.6f,0.0f);

                glVertex3f(13.0f,6.1,0.0f);
                glVertex3f(13.75f,6.1f,0.0f);
         
                glVertex3f(12.0f,10.2,0.0f);
                glVertex3f(12.6f,10.2f,0.0f);
               
                glVertex3f(10.0f,11.5,0.0f);
                glVertex3f(9.8f,12.2f,0.0f);
   
                glVertex3f(6.0f,11.3,0.0f);
                glVertex3f(5.0f,11.7f,0.0f);

                glVertex3f(6.0f,11.3,0.0f);
                glVertex3f(5.0f,11.7f,0.0f);

                glVertex3f(3.1f,8.3,0.0f);
                glVertex3f(2.4f,8.0f,0.0f);
 
                glVertex3f(3.0f,6.0,0.0f);
                glVertex3f(2.4f,5.4f,0.0f);

                glVertex3f(5.1f,2.5f,0.0f);
                glVertex3f(4.6f,2.1f,0.0f);
        glEnd();
	glFlush();
       
	
}

void init(void){
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0,16.0,-1.0,16.0,-1.0,1.0);
	
}



int main(int argc,char** argv){
	glutInit(&argc , argv);//esta funcion de inicializacion podria ejecutar argumentos cualesquiera de la linea de comandos
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);//esta parte asigna los parametros de imagen a nuestra ventana de visualizacion
	glutInitWindowSize(400,480);//esta linea proporciona una posicion iinicial paa la esquina superior izquierda de la ventana
	glutInitWindowPosition(50,50);//esta linea especifica principalmente para establecer la anchura y altura de la ventana de visualizacion
	glutCreateWindow("Dibujar un balon de futbol");//esta parte indica que cree una ventana de visualizacion en la pantalla con un titulo en su barra de titulo
	init();
	glutDisplayFunc(display);//esta parte especifica que contendra la ventana para ello especificamos que sera utilizando funciones opengl
	glutMainLoop();//esta parte es la que permite que todas las ventanas incluyendo el entorno grafico se ejecute
	return 0;//variable de retorno
	
	
}
