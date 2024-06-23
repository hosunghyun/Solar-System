#include <GL/glut.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <stdio.h>

static float mercuryYear = 0, venusYear = 0, earthYear = 0, marsYear = 0, jupiterYear = 0, saturnrYear = 0, uranusYear = 0, neptuneYear = 0, plutoYear =0; //����
static int Time = 0;             //����
float zoom = 6.0;
float Angle = 3; // ī�޶� ����
float RL = 3.0;

void mercury() {
    glPushMatrix();
    glRotatef((GLfloat)90, 1.0, 0.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glutSolidTorus(0.003, 0.4, 4.0, 40);	//���� �˵�
    glPopMatrix();

    glPushMatrix();
    glRotatef((GLfloat)mercuryYear, 0.0, 1.0, 0.0);
    glTranslatef(0.4, 0.0, 0.0);
    glColor3f(0.8, 0.8, 0.0);
    glutSolidSphere(0.03, 10, 10);    // ���� 
    glPopMatrix();
}
void venus() {
    glPushMatrix();
    glRotatef((GLfloat)90, 1.0, 0.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glutSolidTorus(0.003, 0.55, 4.0, 40);	//�ݼ� �˵�
    glPopMatrix();

    glPushMatrix();
    glRotatef((GLfloat)venusYear, 0.0, 1.0, 0.0);
    glTranslatef(0.55, 0.0, 0.0);
    glColor3f(0.7, 0.3, 0.0);
    glutSolidSphere(0.06, 10, 10);    // �ݼ� 
    glPopMatrix();
}
void earth() {
    glPushMatrix();
    glRotatef((GLfloat)90, 1.0, 0.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glutSolidTorus(0.003, 0.75, 4.0, 40);	//���� �˵�
    glPopMatrix();

    glPushMatrix();
    glRotatef((GLfloat)earthYear, 0.0, 1.0, 0.0);
    glTranslatef(0.75, 0.0, 0.0);
    glColor3f(0.2, 0.2, 1.0);
    glutSolidSphere(0.065, 10, 10);    // ���� 

    glRotatef((GLfloat)earthYear, 0.0, 1.0, 0.0);
    glTranslatef(0.09, 0.0, 0.0);
    glColor3f(1.0, 1.0, 0.5);
    glutSolidSphere(0.020, 10, 10);    // ����-�� 

    glPopMatrix();
}
void mars() {
    glPushMatrix();
    glRotatef((GLfloat)90, 1.0, 0.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glutSolidTorus(0.003, 0.90, 4.0, 40);	//ȭ�� �˵�
    glPopMatrix();

    glPushMatrix();
    glRotatef((GLfloat)marsYear, 0.0, 1.0, 0.0);
    glTranslatef(0.90, 0.0, 0.0);
    glColor3f(1.0, 0.3, 0.0);
    glutSolidSphere(0.05, 10, 10);    // ȭ�� 
    glPopMatrix();
}
void jupiter() {
    glPushMatrix();
    glRotatef((GLfloat)90, 1.0, 0.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glutSolidTorus(0.004, 1.55, 4.0, 60);	//�� �˵�
    glPopMatrix();

    glPushMatrix();
    glRotatef((GLfloat)jupiterYear, 0.0, 1.0, 0.0);
    glTranslatef(1.55, 0.0, 0.0);
    glColor3f(1.0, 0.9, 0.5);
    glutSolidSphere(0.357, 20, 20);    // �� 
    
    glRotatef((GLfloat)jupiterYear, 0.3, 1.0, 0.0);
    glTranslatef(0.4, -0.1, 0.0);
    glColor3f(1.0, 1.0, 0.5);
    glutSolidSphere(0.04, 10, 10);    // ����-�̿� 
    glPopMatrix();
}
void saturn() {
    glPushMatrix();
    glRotatef((GLfloat)90, 1.0, 0.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glutSolidTorus(0.004, 2.3, 4.0, 60);	//�伺 �˵�
    glPopMatrix();

    glPushMatrix();
    glRotatef((GLfloat)saturnrYear, 0.0, 1.0, 0.0);
    glTranslatef(2.3, 0.0, 0.0);
    glColor3f(1.0, 0.9, 0.4);
    glutSolidSphere(0.257, 20, 20);    // �伺 
    glPopMatrix();

    glPushMatrix();

    glRotatef((GLfloat)saturnrYear, 0.0, 1.0, 0.0);
    glTranslatef(2.3, 0.0, 0.0);
    glColor3f(1.0, 0.6, 0.1);
    glRotatef((GLfloat)200, 2.0, 2.0, 2.0);
    glutSolidTorus(0.08, 0.4, 2.5, 40);    // �伺 �� 

    glPopMatrix();
}
void uranus() {
    glPushMatrix();
    glRotatef((GLfloat)90, 1.0, 0.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glutSolidTorus(0.004, 3.0, 4.0, 60);	//õ�ռ� �˵�
    glPopMatrix();

    glPushMatrix();
    glRotatef((GLfloat)uranusYear, 0.0, 1.0, 0.0);
    glTranslatef(3.0, 0.0, 0.0);
    glColor3f(0.0, 1.0, 0.6);
    glutSolidSphere(0.13, 20, 20);    // õ�ռ� 
    glPopMatrix();
}
void nepturne() {
    glPushMatrix();
    glRotatef((GLfloat)90, 1.0, 0.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glutSolidTorus(0.004, 3.7, 4.0, 40);	//�ؿռ� �˵�
    glPopMatrix();

    glPushMatrix();
    glRotatef((GLfloat)neptuneYear, 0.0, 1.0, 0.0);
    glTranslatef(3.7, 0.0, 0.0);
    glColor3f(0.0, 0.5, 1.0);
    glutSolidSphere(0.125, 20, 20);    // �ؿռ� 
    glPopMatrix();
}
void pluto() {
    glPushMatrix();
    glRotatef((GLfloat)15, 0.0, 0.0, -1.0);
    glRotatef((GLfloat)90, 1.0, 0.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glutSolidTorus(0.004, 3.8, 4.0, 40);	//��ռ� �˵�
    glPopMatrix();

    glPushMatrix();
    glRotatef((GLfloat)15, 0.0, 0.0, -1.0);
    glRotatef((GLfloat)plutoYear, 0.0, 0.8, 0.0);
    glTranslatef(3.7, 0.0, 0.0);
    glColor3f(0.5, 0.5, 0.5);
    glutSolidSphere(0.03, 20, 20);    // ��ռ�
    glPopMatrix();
}

void display(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_SMOOTH);


    GLfloat position[] = { 0.0, 0.0, 1.5, 1.0 };
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(RL, Angle, zoom, 0.0, -0.5, 0.0, 0.0, 1.0, 0.0);

    glColorMaterial(GL_FRONT, GL_SHININESS);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);


    glLightfv(GL_LIGHT0, GL_POSITION, position);
    glDisable(GL_LIGHTING);
    glColor3f(1.0, 1.0, 0.5);

    glutSolidSphere(0.3, 20, 20);	//�¾�
  
    glEnable(GL_LIGHTING);
    mercury();
    venus();
    earth();
    mars();
    jupiter();
    saturn();
    uranus();
    nepturne();
    pluto();


    glutSwapBuffers();
}

void MyTimer(int Value) {               // ����, ������ �������� ������ �༺���� ������ �����.

    mercuryYear += (48.87 / 12);           //��
    venusYear += (35 / 12);           //��
    earthYear += (29.78 / 12);           //��
    marsYear += (24.13 / 12);           //ȭ
    jupiterYear += (13.076 / 12);          //��
    saturnrYear += (9.69 / 12);           //��
    uranusYear += (6.81 / 12);           //õ
    neptuneYear += (5.43 / 12);           //��
    plutoYear += (3.21 / 12);            //��

    Time = (Time + 2) % 360;         //����
    if (mercuryYear > 360) mercuryYear -= 360;
    if (venusYear > 360) venusYear -= 360;
    if (earthYear > 360) earthYear -= 360;
    if (marsYear > 360) marsYear -= 360;
    if (jupiterYear > 360) jupiterYear -= 360;
    if (saturnrYear > 360) saturnrYear -= 360;
    if (uranusYear > 360) uranusYear -= 360;
    if (neptuneYear > 360) neptuneYear -= 360;
    if (plutoYear > 360) plutoYear -= 360;
    glutPostRedisplay();         // MyDisplay�� �ٽ� ȣ���Ѵ�.
    glutTimerFunc(40, MyTimer, 1);       // Ÿ�̸��ݹ��� �ٽ� ȣ���Ѵ�.
}

void InitLight() {
    GLfloat light_specular[] = { 1.0, 1.0, 1.0 };   // ������
    GLfloat light_diffuse[] = { 1.0, 1.0, 1.0 };   // �ݻ籤
    GLfloat light_ambient[] = { 1.0, 1.0, 1.0 };   // �ֺ���
    GLfloat light_position[] = { 0.0, 0.0, 0.0 };   // ������ ��ġ
    glShadeModel(GL_SMOOTH);       // ���� ���̵�
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightf(GL_LIGHT0, GL_CONSTANT_ATTENUATION, 0.8); // �ֺ��� �� �� ��� ����
}
void reshape(int w, int h)
{
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
   
}

void MyKeyboard(unsigned char key, int x, int y) {
    switch (key) {
    case 'w': // ����
        zoom = zoom - 0.1;
        break;
    case 's': // �ܾƿ�
        zoom = zoom + 0.1;
        break;
    case 'a':
        RL = RL + 0.1;
        break;
    case 'd':
        RL = RL - 0.1;
        break;
    case 'z':
        Angle = Angle - 0.1;
        break;
    case 'x':
        Angle = Angle + 0.1;
        break;
    default:
        break;
    }
    glutPostRedisplay();
}

void main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1920, 1080);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("20181479��ȣ��");

    glutKeyboardFunc(MyKeyboard);
    glutTimerFunc(40, MyTimer, 1);
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
}
