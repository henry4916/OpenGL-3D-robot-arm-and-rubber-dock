#ifndef SMFLOADER_H
#define SMFLOADER_H

/*
   �@��vertex 3��float  �@��size
   �Y��3��vertex  vertexSize ��3  ���Overtex���Ҧ���float��9

   face�]�O�@��    */

class SMFLoader
{
public:
	SMFLoader();
	void load(char* filename);
	void clear();
	float* getVertices();
	int* getFaces();
	float* getColors();
	float* getNormals();

	float* getFace(int index);
	float* getFaceColor(int index);
	float* getFaceNormal(int index);

	int getVertexSize();
	int getFaceSize();
	int getColorSize();
	int getNormalSize();
private:
	float* vertex;
	int* face;
	float* color;
	float* normal;

	int vertexSize;
	int faceSize;
	int colorSize;
	int normalSize;
};

#endif