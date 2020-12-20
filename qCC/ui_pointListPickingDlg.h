/********************************************************************************
** Form generated from reading UI file 'pointListPickingDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINTLISTPICKINGDLG_H
#define UI_POINTLISTPICKINGDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PointListPickingDlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *revertToolButton;
    QToolButton *exportToolButton;
    QToolButton *validToolButton;
    QToolButton *cancelToolButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *countLineEdit;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *markerSizeSpinBox;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QSpinBox *startIndexSpinBox;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *showGlobalCoordsCheckBox;

    void setupUi(QDialog *PointListPickingDlg)
    {
        if (PointListPickingDlg->objectName().isEmpty())
            PointListPickingDlg->setObjectName(QString::fromUtf8("PointListPickingDlg"));
        PointListPickingDlg->resize(500, 227);
        PointListPickingDlg->setMinimumSize(QSize(500, 0));
        verticalLayout = new QVBoxLayout(PointListPickingDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        revertToolButton = new QToolButton(PointListPickingDlg);
        revertToolButton->setObjectName(QString::fromUtf8("revertToolButton"));
        revertToolButton->setEnabled(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/images/smallReset.png"), QSize(), QIcon::Normal, QIcon::Off);
        revertToolButton->setIcon(icon);

        horizontalLayout->addWidget(revertToolButton);

        exportToolButton = new QToolButton(PointListPickingDlg);
        exportToolButton->setObjectName(QString::fromUtf8("exportToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/images/ccSave.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportToolButton->setIcon(icon1);
        exportToolButton->setPopupMode(QToolButton::MenuButtonPopup);

        horizontalLayout->addWidget(exportToolButton);

        validToolButton = new QToolButton(PointListPickingDlg);
        validToolButton->setObjectName(QString::fromUtf8("validToolButton"));
        validToolButton->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CC/images/smallValidate.png"), QSize(), QIcon::Normal, QIcon::Off);
        validToolButton->setIcon(icon2);

        horizontalLayout->addWidget(validToolButton);

        cancelToolButton = new QToolButton(PointListPickingDlg);
        cancelToolButton->setObjectName(QString::fromUtf8("cancelToolButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/CC/images/smallCancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelToolButton->setIcon(icon3);

        horizontalLayout->addWidget(cancelToolButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_2 = new QLabel(PointListPickingDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        countLineEdit = new QLineEdit(PointListPickingDlg);
        countLineEdit->setObjectName(QString::fromUtf8("countLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(countLineEdit->sizePolicy().hasHeightForWidth());
        countLineEdit->setSizePolicy(sizePolicy);
        countLineEdit->setMaximumSize(QSize(40, 16777215));
        countLineEdit->setText(QString::fromUtf8("0"));
        countLineEdit->setMaxLength(255);
        countLineEdit->setFrame(false);
        countLineEdit->setReadOnly(true);

        horizontalLayout->addWidget(countLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(PointListPickingDlg);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setText(QString::fromUtf8("X"));
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setText(QString::fromUtf8("Y"));
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setText(QString::fromUtf8("Z"));
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setProperty("showDropIndicator", QVariant(false));
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->horizontalHeader()->setDefaultSectionSize(115);
        tableWidget->verticalHeader()->setDefaultSectionSize(18);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(PointListPickingDlg);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        markerSizeSpinBox = new QSpinBox(PointListPickingDlg);
        markerSizeSpinBox->setObjectName(QString::fromUtf8("markerSizeSpinBox"));
        markerSizeSpinBox->setMinimum(1);
        markerSizeSpinBox->setMaximum(99);
        markerSizeSpinBox->setValue(4);

        horizontalLayout_2->addWidget(markerSizeSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_3 = new QLabel(PointListPickingDlg);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        startIndexSpinBox = new QSpinBox(PointListPickingDlg);
        startIndexSpinBox->setObjectName(QString::fromUtf8("startIndexSpinBox"));
        startIndexSpinBox->setMaximum(10000);
        startIndexSpinBox->setSingleStep(1);
        startIndexSpinBox->setValue(1);

        horizontalLayout_2->addWidget(startIndexSpinBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        showGlobalCoordsCheckBox = new QCheckBox(PointListPickingDlg);
        showGlobalCoordsCheckBox->setObjectName(QString::fromUtf8("showGlobalCoordsCheckBox"));
        showGlobalCoordsCheckBox->setEnabled(false);

        horizontalLayout_2->addWidget(showGlobalCoordsCheckBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(PointListPickingDlg);

        QMetaObject::connectSlotsByName(PointListPickingDlg);
    } // setupUi

    void retranslateUi(QDialog *PointListPickingDlg)
    {
        PointListPickingDlg->setWindowTitle(QCoreApplication::translate("PointListPickingDlg", "Point list picking", nullptr));
#if QT_CONFIG(statustip)
        revertToolButton->setStatusTip(QCoreApplication::translate("PointListPickingDlg", "Remove last entry", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        revertToolButton->setWhatsThis(QCoreApplication::translate("PointListPickingDlg", "Remove last entry", nullptr));
#endif // QT_CONFIG(whatsthis)
        revertToolButton->setText(QCoreApplication::translate("PointListPickingDlg", "remove last", nullptr));
#if QT_CONFIG(tooltip)
        exportToolButton->setToolTip(QCoreApplication::translate("PointListPickingDlg", "export to ASCII file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        exportToolButton->setStatusTip(QCoreApplication::translate("PointListPickingDlg", "export to ASCII file", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        validToolButton->setStatusTip(QCoreApplication::translate("PointListPickingDlg", "Convert list to new cloud (and close dialog)", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        validToolButton->setWhatsThis(QCoreApplication::translate("PointListPickingDlg", "Convert list to new cloud (and close dialog)", nullptr));
#endif // QT_CONFIG(whatsthis)
        validToolButton->setText(QCoreApplication::translate("PointListPickingDlg", "to cloud", nullptr));
#if QT_CONFIG(tooltip)
        cancelToolButton->setToolTip(QCoreApplication::translate("PointListPickingDlg", "Close dialog (list will be lost)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cancelToolButton->setStatusTip(QCoreApplication::translate("PointListPickingDlg", "Close dialog (list will be lost)", nullptr));
#endif // QT_CONFIG(statustip)
        cancelToolButton->setText(QCoreApplication::translate("PointListPickingDlg", "stop", nullptr));
        label_2->setText(QCoreApplication::translate("PointListPickingDlg", "count", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("PointListPickingDlg", "Index", nullptr));
        label->setText(QCoreApplication::translate("PointListPickingDlg", "marker size", nullptr));
        label_3->setText(QCoreApplication::translate("PointListPickingDlg", "start index", nullptr));
#if QT_CONFIG(tooltip)
        showGlobalCoordsCheckBox->setToolTip(QCoreApplication::translate("PointListPickingDlg", "Show global coordinates (instead of shifted ones)", nullptr));
#endif // QT_CONFIG(tooltip)
        showGlobalCoordsCheckBox->setText(QCoreApplication::translate("PointListPickingDlg", "show global coordinates", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PointListPickingDlg: public Ui_PointListPickingDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINTLISTPICKINGDLG_H
