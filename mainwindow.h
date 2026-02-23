#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QString ProjectPath, QJsonObject ProjectInfo, QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void on_treeView_doubleClicked(const QModelIndex &index);

    void on_treeView_clicked(const QModelIndex &index);

    void onTreeContextMenu(const QPoint &pos);

    void onSaveFile();

private:
    Ui::MainWindow *ui;
    void SaveProjectInCache(const QString project_path);
    void openDirectory(const QString &path);
};
#endif // MAINWINDOW_H
