#include <bits/stdc++.h>
using namespace std;

class File{
  public: 
    string name;
    File *parent;
    unordered_map<string, File*>  subFile;
    File(const string &name);
    void   mkdir(const string &s);
    File * cd(const string &s);
    void pwd();
};


File::File(const string& name) : name(name), parent(nullptr) {}

void File::mkdir(const string &dir){
     if (subFile.find(dir) != subFile.end()) return;

        File* newFile = new File(dir);
        newFile->parent = this;
        subFile[dir] = newFile;


}

File* File::cd(const string &s){
   if (s == "..") {
            if (this->parent != nullptr) return this->parent;
        }

        if (subFile.find(s) != subFile.end()) return subFile[s];

        return this;


}

void File::pwd(){
    File *temp=this;
    string path="/";
    while(temp->parent!=nullptr){
        path="/"+temp->name+path;
        temp=this->parent;
    }
    cout<< path;
}

int main(){
    File* root = new File("");
    File* cur = root;

    string command;
    while (getline(cin, command)) {
        if (command.find("mkdir") == 0) {
            string dir = command.substr(6);
            cur->mkdir(dir);
        } else if (command.find("cd") == 0) {
            string dir = command.substr(3);
            cur = cur->cd(dir);
        } else if (command == "pwd") {
           cur->pwd();
        }
    }
    return 0;

    // 清理动态分配的内存（可选，取决于你是否想管理内存）
    // 这部分代码可以用递归来删除所有的文件和目录
    // 这里省略了

}