#ifndef CODEEDITORTAB_H
#define CODEEDITORTAB_H

#include "QCodeEditor.hpp"
#include "tooltab.h"
#include <QWidget>
#include <qfileinfo.h>
#include <qlabel.h>

class CodeEditorTab : public ToolTab
{
    Q_OBJECT

private:

    /**
     * @brief Виджет редактора кода
    */
    QCodeEditor* m_codeEditorWidget;

    /**
     * @brief Главный виджет страницы "Binary File Detected"
    */
    QWidget* m_overlayWidget;

    /**
     * @brief Флаг принудительной установки данных
     *
     * Используется при нажатии пользователем на кнопку "Open Anyway" на странице "Binary File Detected"
    */
    bool forceSetData = false;

public:
    explicit CodeEditorTab(QWidget *parent, QString path);

signals:

    /**
     * @brief Переключить на вкладку "Hex View"
     *
     * Используется при нажатии на кнопку "Open in HexView" на странице "Binary File Detected"
    */
    void switchHexViewTab();

public slots:

    // From Parrent Class: ToolTab
    void setTabData() override;
    void saveTabData() override;

};

#endif // CODEEDITORTAB_H
