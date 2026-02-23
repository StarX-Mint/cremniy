#include "createprojectform.h"
#include "ui_createprojectform.h"

CreateProjectForm::CreateProjectForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CreateProjectForm)
{
    ui->setupUi(this);
}

CreateProjectForm::~CreateProjectForm()
{
    delete ui;
}
