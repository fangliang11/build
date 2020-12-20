/********************************************************************************
** Form generated from reading UI file 'matrixDisplayDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATRIXDISPLAYDLG_H
#define UI_MATRIXDISPLAYDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MatrixDisplayDlg
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *Export;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QTextEdit *maxTextEdit;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *axisLabel;
    QLabel *label_2;
    QLineEdit *angleLabel;
    QLabel *label_3;
    QLineEdit *centerLabel;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *exportToAsciiPushButton;
    QPushButton *exportToClipboardPushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *MatrixDisplayDlg)
    {
        if (MatrixDisplayDlg->objectName().isEmpty())
            MatrixDisplayDlg->setObjectName(QString::fromUtf8("MatrixDisplayDlg"));
        MatrixDisplayDlg->resize(250, 140);
        MatrixDisplayDlg->setMinimumSize(QSize(0, 140));
        MatrixDisplayDlg->setFocusPolicy(Qt::StrongFocus);
        verticalLayout_2 = new QVBoxLayout(MatrixDisplayDlg);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Export = new QTabWidget(MatrixDisplayDlg);
        Export->setObjectName(QString::fromUtf8("Export"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(12, -1, 12, 12);
        maxTextEdit = new QTextEdit(tab);
        maxTextEdit->setObjectName(QString::fromUtf8("maxTextEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(maxTextEdit->sizePolicy().hasHeightForWidth());
        maxTextEdit->setSizePolicy(sizePolicy);
        maxTextEdit->setReadOnly(true);
        maxTextEdit->setHtml(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">1 0 0 0</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">0 1 0 0</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">0 0 1 0</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">"
                        "0 0 0 1</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p></body></html>"));

        verticalLayout->addWidget(maxTextEdit);

        Export->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(12, -1, 12, 12);
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        axisLabel = new QLineEdit(tab_2);
        axisLabel->setObjectName(QString::fromUtf8("axisLabel"));
        axisLabel->setText(QString::fromUtf8("0 ; 0 ; 1"));
        axisLabel->setReadOnly(true);

        gridLayout->addWidget(axisLabel, 0, 1, 1, 1);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        angleLabel = new QLineEdit(tab_2);
        angleLabel->setObjectName(QString::fromUtf8("angleLabel"));
        angleLabel->setText(QString::fromUtf8("15.65 \302\260"));
        angleLabel->setReadOnly(true);

        gridLayout->addWidget(angleLabel, 1, 1, 1, 1);

        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        centerLabel = new QLineEdit(tab_2);
        centerLabel->setObjectName(QString::fromUtf8("centerLabel"));
        centerLabel->setText(QString::fromUtf8("0 ; 0;  0"));
        centerLabel->setReadOnly(true);

        gridLayout->addWidget(centerLabel, 2, 1, 1, 1);

        Export->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, -1, 12);
        exportToAsciiPushButton = new QPushButton(tab_3);
        exportToAsciiPushButton->setObjectName(QString::fromUtf8("exportToAsciiPushButton"));
        exportToAsciiPushButton->setText(QString::fromUtf8("ASCII"));

        verticalLayout_3->addWidget(exportToAsciiPushButton);

        exportToClipboardPushButton = new QPushButton(tab_3);
        exportToClipboardPushButton->setObjectName(QString::fromUtf8("exportToClipboardPushButton"));

        verticalLayout_3->addWidget(exportToClipboardPushButton);

        verticalSpacer = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        Export->addTab(tab_3, QString());

        verticalLayout_2->addWidget(Export);


        retranslateUi(MatrixDisplayDlg);

        Export->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MatrixDisplayDlg);
    } // setupUi

    void retranslateUi(QWidget *MatrixDisplayDlg)
    {
        MatrixDisplayDlg->setWindowTitle(QCoreApplication::translate("MatrixDisplayDlg", "Matrix", nullptr));
        Export->setTabText(Export->indexOf(tab), QCoreApplication::translate("MatrixDisplayDlg", "Matrix", nullptr));
        label->setText(QCoreApplication::translate("MatrixDisplayDlg", "Axis", nullptr));
        label_2->setText(QCoreApplication::translate("MatrixDisplayDlg", "Angle", nullptr));
        label_3->setText(QCoreApplication::translate("MatrixDisplayDlg", "Center", nullptr));
        Export->setTabText(Export->indexOf(tab_2), QCoreApplication::translate("MatrixDisplayDlg", "Axis/Angle", nullptr));
        exportToClipboardPushButton->setText(QCoreApplication::translate("MatrixDisplayDlg", "Clipboard", nullptr));
        Export->setTabText(Export->indexOf(tab_3), QCoreApplication::translate("MatrixDisplayDlg", "Export", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MatrixDisplayDlg: public Ui_MatrixDisplayDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATRIXDISPLAYDLG_H
