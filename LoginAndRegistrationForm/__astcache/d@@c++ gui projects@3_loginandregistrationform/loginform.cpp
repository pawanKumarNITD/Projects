//---------------------------------------------------------------------------

#include <fmx.h>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#pragma hdrstop

#include "LoginForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMyLoginForm *MyLoginForm;
//---------------------------------------------------------------------------
__fastcall TMyLoginForm::TMyLoginForm(TComponent* Owner)
	: TForm(Owner)
{
}

// function to parse the line

std::vector<std::string> parseCommaDelimitedFile(std::string line){
	std::vector<std::string> result;
	std::stringstream s_stream(line);

	while(s_stream.good()){
		std::string substr;
		getline(s_stream,substr,',');
		result.push_back(substr);

	}
   return result;
}

const char* ConvertToCharPtr(AnsiString ansiStr){
	   return  ansiStr.c_str();
}

//---------------------------------------------------------------------------
void __fastcall TMyLoginForm::loginButtonClick(TObject *Sender)
{
		fstream myFile;
		myFile.open("RegisteredUsers.txt", ios::in);// make file read only

		if(myFile.is_open()){
			std::string line;

			while(getline(myFile,line)){
				std::vector<std::string> parsedLine =   parseCommaDelimitedFile(line);
				const char* username =  parsedLine.at(2).c_str();

				//AnsiString editUsername = usernameEdit->Text;
				//const char* userNameString =  editUsername.c_str();

				if(strcmp(username,ConvertToCharPtr(usernameEdit->Text))==0 ){
					const char* password =  parsedLine.at(3).c_str();

					//AnsiString editPassword = passwordEdit->Text;
					//const char* passwordString =  editPassword.c_str();

					 if(strcmp(password,ConvertToCharPtr(passwordEdit->Text))==0 )
						   messageLabel->Text = "Success!";
					 else
						 messageLabel->Text = "Wrong password!";
				}

			}

		}
}
//---------------------------------------------------------------------------
