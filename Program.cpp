#include "MyForm.h" //���������� �����, ������� ����� ����������� � ������ �������
namespace LabTSISA2 //�������� ������������ ���� ���������� ���������� � ����� ��������� ����� 
	//� ������ �����
{
	[STAThreadAttribute] //������� ��� ������ ������� ��������� ������ (����������)
	int Main(array<System::String ^> ^args) //������� �����, �������� ����������� � 
	//���������
	{
	System::Windows::Forms::Application::EnableVisualStyles(); //��������
	//���������� ����� ��� ����������.
	System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);
	//��� ��������� ������
	System::Windows::Forms::Application::Run(gcnew MyForm()); //������ �����
	return 0;
	}
}