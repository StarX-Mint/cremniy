#ifndef CREATEPROJECTFORM_H
#define CREATEPROJECTFORM_H

#include <QWidget>

namespace Ui {
class CreateProjectForm;
}

class CreateProjectForm : public QWidget
{
    Q_OBJECT

public:
    explicit CreateProjectForm(QWidget *parent = nullptr);
    ~CreateProjectForm();

private:
    Ui::CreateProjectForm *ui;
};

#endif // CREATEPROJECTFORM_H
