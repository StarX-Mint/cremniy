#ifndef HEXVIEWTAB_H
#define HEXVIEWTAB_H

#include "QHexView/qhexview.h"
#include "tooltab.h"
#include <QWidget>
#include <qfileinfo.h>

class HexViewTab : public ToolTab
{
    Q_OBJECT

private:

    /**
     * @brief Виджет HexView
    */
    QHexView* m_hexViewWidget;

    /**
     * @brief Создаёт страницу для вкладки формата
    */
    QWidget* createPage();

public:
    explicit HexViewTab(QWidget *parent, QString path);

public slots:

    // From Parrent Class: ToolTab
    void setTabData() override;
    void saveTabData() override;

};

#endif // HEXVIEWTAB_H
