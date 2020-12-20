/********************************************************************************
** Form generated from reading UI file 'boundingBoxEditorDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOUNDINGBOXEDITORDLG_H
#define UI_BOUNDINGBOXEDITORDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BoundingBoxEditorDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QComboBox *pointTypeComboBox;
    QComboBox *widthComboBox;
    QLabel *xLabel;
    QDoubleSpinBox *xDoubleSpinBox;
    QDoubleSpinBox *dxDoubleSpinBox;
    QLabel *yLabel;
    QDoubleSpinBox *yDoubleSpinBox;
    QDoubleSpinBox *dyDoubleSpinBox;
    QLabel *zLabel;
    QDoubleSpinBox *zDoubleSpinBox;
    QDoubleSpinBox *dzDoubleSpinBox;
    QLabel *warningLabel;
    QGroupBox *oriGroupBox;
    QGridLayout *gridLayout_2;
    QFrame *xOriFrame;
    QVBoxLayout *verticalLayout_2;
    QDoubleSpinBox *xOriXDoubleSpinBox;
    QDoubleSpinBox *xOriYDoubleSpinBox;
    QDoubleSpinBox *xOriZDoubleSpinBox;
    QCheckBox *oriZCheckBox;
    QCheckBox *oriYCheckBox;
    QCheckBox *oriXCheckBox;
    QFrame *yOriFrame;
    QVBoxLayout *verticalLayout_4;
    QDoubleSpinBox *yOriXDoubleSpinBox;
    QDoubleSpinBox *yOriYDoubleSpinBox;
    QDoubleSpinBox *yOriZDoubleSpinBox;
    QFrame *zOriFrame;
    QVBoxLayout *verticalLayout_5;
    QDoubleSpinBox *zOriXDoubleSpinBox;
    QDoubleSpinBox *zOriYDoubleSpinBox;
    QDoubleSpinBox *zOriZDoubleSpinBox;
    QPushButton *fromClipboardPushButton;
    QPushButton *toClipboardPushButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QCheckBox *keepSquareCheckBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *defaultPushButton;
    QPushButton *lastPushButton;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *BoundingBoxEditorDialog)
    {
        if (BoundingBoxEditorDialog->objectName().isEmpty())
            BoundingBoxEditorDialog->setObjectName(QString::fromUtf8("BoundingBoxEditorDialog"));
        BoundingBoxEditorDialog->resize(639, 500);
        verticalLayout = new QVBoxLayout(BoundingBoxEditorDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pointTypeComboBox = new QComboBox(BoundingBoxEditorDialog);
        pointTypeComboBox->addItem(QString());
        pointTypeComboBox->addItem(QString());
        pointTypeComboBox->addItem(QString());
        pointTypeComboBox->setObjectName(QString::fromUtf8("pointTypeComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pointTypeComboBox->sizePolicy().hasHeightForWidth());
        pointTypeComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pointTypeComboBox, 0, 1, 1, 1);

        widthComboBox = new QComboBox(BoundingBoxEditorDialog);
        widthComboBox->addItem(QString());
        widthComboBox->setObjectName(QString::fromUtf8("widthComboBox"));
        sizePolicy.setHeightForWidth(widthComboBox->sizePolicy().hasHeightForWidth());
        widthComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(widthComboBox, 0, 2, 1, 1);

        xLabel = new QLabel(BoundingBoxEditorDialog);
        xLabel->setObjectName(QString::fromUtf8("xLabel"));
        xLabel->setText(QString::fromUtf8("X"));

        gridLayout->addWidget(xLabel, 1, 0, 1, 1);

        xDoubleSpinBox = new QDoubleSpinBox(BoundingBoxEditorDialog);
        xDoubleSpinBox->setObjectName(QString::fromUtf8("xDoubleSpinBox"));
        sizePolicy.setHeightForWidth(xDoubleSpinBox->sizePolicy().hasHeightForWidth());
        xDoubleSpinBox->setSizePolicy(sizePolicy);
        xDoubleSpinBox->setDecimals(8);
        xDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        xDoubleSpinBox->setMaximum(1000000000.000000000000000);

        gridLayout->addWidget(xDoubleSpinBox, 1, 1, 1, 1);

        dxDoubleSpinBox = new QDoubleSpinBox(BoundingBoxEditorDialog);
        dxDoubleSpinBox->setObjectName(QString::fromUtf8("dxDoubleSpinBox"));
        sizePolicy.setHeightForWidth(dxDoubleSpinBox->sizePolicy().hasHeightForWidth());
        dxDoubleSpinBox->setSizePolicy(sizePolicy);
        dxDoubleSpinBox->setDecimals(8);
        dxDoubleSpinBox->setMinimum(0.000000000000000);
        dxDoubleSpinBox->setMaximum(1000000000.000000000000000);

        gridLayout->addWidget(dxDoubleSpinBox, 1, 2, 1, 1);

        yLabel = new QLabel(BoundingBoxEditorDialog);
        yLabel->setObjectName(QString::fromUtf8("yLabel"));
        yLabel->setText(QString::fromUtf8("Y"));

        gridLayout->addWidget(yLabel, 2, 0, 1, 1);

        yDoubleSpinBox = new QDoubleSpinBox(BoundingBoxEditorDialog);
        yDoubleSpinBox->setObjectName(QString::fromUtf8("yDoubleSpinBox"));
        sizePolicy.setHeightForWidth(yDoubleSpinBox->sizePolicy().hasHeightForWidth());
        yDoubleSpinBox->setSizePolicy(sizePolicy);
        yDoubleSpinBox->setDecimals(8);
        yDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        yDoubleSpinBox->setMaximum(1000000000.000000000000000);

        gridLayout->addWidget(yDoubleSpinBox, 2, 1, 1, 1);

        dyDoubleSpinBox = new QDoubleSpinBox(BoundingBoxEditorDialog);
        dyDoubleSpinBox->setObjectName(QString::fromUtf8("dyDoubleSpinBox"));
        sizePolicy.setHeightForWidth(dyDoubleSpinBox->sizePolicy().hasHeightForWidth());
        dyDoubleSpinBox->setSizePolicy(sizePolicy);
        dyDoubleSpinBox->setDecimals(8);
        dyDoubleSpinBox->setMinimum(0.000000000000000);
        dyDoubleSpinBox->setMaximum(1000000000.000000000000000);

        gridLayout->addWidget(dyDoubleSpinBox, 2, 2, 1, 1);

        zLabel = new QLabel(BoundingBoxEditorDialog);
        zLabel->setObjectName(QString::fromUtf8("zLabel"));
        zLabel->setText(QString::fromUtf8("Z"));

        gridLayout->addWidget(zLabel, 3, 0, 1, 1);

        zDoubleSpinBox = new QDoubleSpinBox(BoundingBoxEditorDialog);
        zDoubleSpinBox->setObjectName(QString::fromUtf8("zDoubleSpinBox"));
        sizePolicy.setHeightForWidth(zDoubleSpinBox->sizePolicy().hasHeightForWidth());
        zDoubleSpinBox->setSizePolicy(sizePolicy);
        zDoubleSpinBox->setDecimals(8);
        zDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        zDoubleSpinBox->setMaximum(1000000000.000000000000000);

        gridLayout->addWidget(zDoubleSpinBox, 3, 1, 1, 1);

        dzDoubleSpinBox = new QDoubleSpinBox(BoundingBoxEditorDialog);
        dzDoubleSpinBox->setObjectName(QString::fromUtf8("dzDoubleSpinBox"));
        sizePolicy.setHeightForWidth(dzDoubleSpinBox->sizePolicy().hasHeightForWidth());
        dzDoubleSpinBox->setSizePolicy(sizePolicy);
        dzDoubleSpinBox->setDecimals(8);
        dzDoubleSpinBox->setMinimum(0.000000000000000);
        dzDoubleSpinBox->setMaximum(1000000000.000000000000000);

        gridLayout->addWidget(dzDoubleSpinBox, 3, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        warningLabel = new QLabel(BoundingBoxEditorDialog);
        warningLabel->setObjectName(QString::fromUtf8("warningLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(warningLabel->sizePolicy().hasHeightForWidth());
        warningLabel->setSizePolicy(sizePolicy1);
        warningLabel->setStyleSheet(QString::fromUtf8("color: red;"));
        warningLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(warningLabel);

        oriGroupBox = new QGroupBox(BoundingBoxEditorDialog);
        oriGroupBox->setObjectName(QString::fromUtf8("oriGroupBox"));
        sizePolicy1.setHeightForWidth(oriGroupBox->sizePolicy().hasHeightForWidth());
        oriGroupBox->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(oriGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        xOriFrame = new QFrame(oriGroupBox);
        xOriFrame->setObjectName(QString::fromUtf8("xOriFrame"));
        sizePolicy1.setHeightForWidth(xOriFrame->sizePolicy().hasHeightForWidth());
        xOriFrame->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(xOriFrame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        xOriXDoubleSpinBox = new QDoubleSpinBox(xOriFrame);
        xOriXDoubleSpinBox->setObjectName(QString::fromUtf8("xOriXDoubleSpinBox"));
        sizePolicy.setHeightForWidth(xOriXDoubleSpinBox->sizePolicy().hasHeightForWidth());
        xOriXDoubleSpinBox->setSizePolicy(sizePolicy);
        xOriXDoubleSpinBox->setDecimals(8);
        xOriXDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        xOriXDoubleSpinBox->setMaximum(1000000000.000000000000000);
        xOriXDoubleSpinBox->setValue(1.000000000000000);

        verticalLayout_2->addWidget(xOriXDoubleSpinBox);

        xOriYDoubleSpinBox = new QDoubleSpinBox(xOriFrame);
        xOriYDoubleSpinBox->setObjectName(QString::fromUtf8("xOriYDoubleSpinBox"));
        sizePolicy.setHeightForWidth(xOriYDoubleSpinBox->sizePolicy().hasHeightForWidth());
        xOriYDoubleSpinBox->setSizePolicy(sizePolicy);
        xOriYDoubleSpinBox->setDecimals(8);
        xOriYDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        xOriYDoubleSpinBox->setMaximum(1000000000.000000000000000);

        verticalLayout_2->addWidget(xOriYDoubleSpinBox);

        xOriZDoubleSpinBox = new QDoubleSpinBox(xOriFrame);
        xOriZDoubleSpinBox->setObjectName(QString::fromUtf8("xOriZDoubleSpinBox"));
        sizePolicy.setHeightForWidth(xOriZDoubleSpinBox->sizePolicy().hasHeightForWidth());
        xOriZDoubleSpinBox->setSizePolicy(sizePolicy);
        xOriZDoubleSpinBox->setDecimals(8);
        xOriZDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        xOriZDoubleSpinBox->setMaximum(1000000000.000000000000000);

        verticalLayout_2->addWidget(xOriZDoubleSpinBox);


        gridLayout_2->addWidget(xOriFrame, 1, 0, 1, 1);

        oriZCheckBox = new QCheckBox(oriGroupBox);
        oriZCheckBox->setObjectName(QString::fromUtf8("oriZCheckBox"));
        oriZCheckBox->setText(QString::fromUtf8("Z"));
        oriZCheckBox->setChecked(true);
        oriZCheckBox->setAutoExclusive(true);

        gridLayout_2->addWidget(oriZCheckBox, 0, 2, 1, 1);

        oriYCheckBox = new QCheckBox(oriGroupBox);
        oriYCheckBox->setObjectName(QString::fromUtf8("oriYCheckBox"));
        oriYCheckBox->setText(QString::fromUtf8("Y"));
        oriYCheckBox->setAutoExclusive(true);

        gridLayout_2->addWidget(oriYCheckBox, 0, 1, 1, 1);

        oriXCheckBox = new QCheckBox(oriGroupBox);
        oriXCheckBox->setObjectName(QString::fromUtf8("oriXCheckBox"));
        oriXCheckBox->setText(QString::fromUtf8("X"));
        oriXCheckBox->setAutoExclusive(true);

        gridLayout_2->addWidget(oriXCheckBox, 0, 0, 1, 1);

        yOriFrame = new QFrame(oriGroupBox);
        yOriFrame->setObjectName(QString::fromUtf8("yOriFrame"));
        sizePolicy1.setHeightForWidth(yOriFrame->sizePolicy().hasHeightForWidth());
        yOriFrame->setSizePolicy(sizePolicy1);
        verticalLayout_4 = new QVBoxLayout(yOriFrame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        yOriXDoubleSpinBox = new QDoubleSpinBox(yOriFrame);
        yOriXDoubleSpinBox->setObjectName(QString::fromUtf8("yOriXDoubleSpinBox"));
        sizePolicy.setHeightForWidth(yOriXDoubleSpinBox->sizePolicy().hasHeightForWidth());
        yOriXDoubleSpinBox->setSizePolicy(sizePolicy);
        yOriXDoubleSpinBox->setDecimals(8);
        yOriXDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        yOriXDoubleSpinBox->setMaximum(1000000000.000000000000000);

        verticalLayout_4->addWidget(yOriXDoubleSpinBox);

        yOriYDoubleSpinBox = new QDoubleSpinBox(yOriFrame);
        yOriYDoubleSpinBox->setObjectName(QString::fromUtf8("yOriYDoubleSpinBox"));
        sizePolicy.setHeightForWidth(yOriYDoubleSpinBox->sizePolicy().hasHeightForWidth());
        yOriYDoubleSpinBox->setSizePolicy(sizePolicy);
        yOriYDoubleSpinBox->setDecimals(8);
        yOriYDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        yOriYDoubleSpinBox->setMaximum(1000000000.000000000000000);
        yOriYDoubleSpinBox->setValue(1.000000000000000);

        verticalLayout_4->addWidget(yOriYDoubleSpinBox);

        yOriZDoubleSpinBox = new QDoubleSpinBox(yOriFrame);
        yOriZDoubleSpinBox->setObjectName(QString::fromUtf8("yOriZDoubleSpinBox"));
        sizePolicy.setHeightForWidth(yOriZDoubleSpinBox->sizePolicy().hasHeightForWidth());
        yOriZDoubleSpinBox->setSizePolicy(sizePolicy);
        yOriZDoubleSpinBox->setDecimals(8);
        yOriZDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        yOriZDoubleSpinBox->setMaximum(1000000000.000000000000000);

        verticalLayout_4->addWidget(yOriZDoubleSpinBox);


        gridLayout_2->addWidget(yOriFrame, 1, 1, 1, 1);

        zOriFrame = new QFrame(oriGroupBox);
        zOriFrame->setObjectName(QString::fromUtf8("zOriFrame"));
        zOriFrame->setEnabled(false);
        sizePolicy1.setHeightForWidth(zOriFrame->sizePolicy().hasHeightForWidth());
        zOriFrame->setSizePolicy(sizePolicy1);
        verticalLayout_5 = new QVBoxLayout(zOriFrame);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        zOriXDoubleSpinBox = new QDoubleSpinBox(zOriFrame);
        zOriXDoubleSpinBox->setObjectName(QString::fromUtf8("zOriXDoubleSpinBox"));
        sizePolicy.setHeightForWidth(zOriXDoubleSpinBox->sizePolicy().hasHeightForWidth());
        zOriXDoubleSpinBox->setSizePolicy(sizePolicy);
        zOriXDoubleSpinBox->setDecimals(8);
        zOriXDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        zOriXDoubleSpinBox->setMaximum(1000000000.000000000000000);

        verticalLayout_5->addWidget(zOriXDoubleSpinBox);

        zOriYDoubleSpinBox = new QDoubleSpinBox(zOriFrame);
        zOriYDoubleSpinBox->setObjectName(QString::fromUtf8("zOriYDoubleSpinBox"));
        sizePolicy.setHeightForWidth(zOriYDoubleSpinBox->sizePolicy().hasHeightForWidth());
        zOriYDoubleSpinBox->setSizePolicy(sizePolicy);
        zOriYDoubleSpinBox->setDecimals(8);
        zOriYDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        zOriYDoubleSpinBox->setMaximum(1000000000.000000000000000);

        verticalLayout_5->addWidget(zOriYDoubleSpinBox);

        zOriZDoubleSpinBox = new QDoubleSpinBox(zOriFrame);
        zOriZDoubleSpinBox->setObjectName(QString::fromUtf8("zOriZDoubleSpinBox"));
        sizePolicy.setHeightForWidth(zOriZDoubleSpinBox->sizePolicy().hasHeightForWidth());
        zOriZDoubleSpinBox->setSizePolicy(sizePolicy);
        zOriZDoubleSpinBox->setDecimals(8);
        zOriZDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        zOriZDoubleSpinBox->setMaximum(1000000000.000000000000000);
        zOriZDoubleSpinBox->setValue(1.000000000000000);

        verticalLayout_5->addWidget(zOriZDoubleSpinBox);


        gridLayout_2->addWidget(zOriFrame, 1, 2, 1, 1);

        fromClipboardPushButton = new QPushButton(oriGroupBox);
        fromClipboardPushButton->setObjectName(QString::fromUtf8("fromClipboardPushButton"));

        gridLayout_2->addWidget(fromClipboardPushButton, 2, 0, 1, 1);

        toClipboardPushButton = new QPushButton(oriGroupBox);
        toClipboardPushButton->setObjectName(QString::fromUtf8("toClipboardPushButton"));

        gridLayout_2->addWidget(toClipboardPushButton, 2, 1, 1, 1);


        verticalLayout->addWidget(oriGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        keepSquareCheckBox = new QCheckBox(BoundingBoxEditorDialog);
        keepSquareCheckBox->setObjectName(QString::fromUtf8("keepSquareCheckBox"));

        horizontalLayout->addWidget(keepSquareCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        defaultPushButton = new QPushButton(BoundingBoxEditorDialog);
        defaultPushButton->setObjectName(QString::fromUtf8("defaultPushButton"));

        horizontalLayout->addWidget(defaultPushButton);

        lastPushButton = new QPushButton(BoundingBoxEditorDialog);
        lastPushButton->setObjectName(QString::fromUtf8("lastPushButton"));

        horizontalLayout->addWidget(lastPushButton);

        okPushButton = new QPushButton(BoundingBoxEditorDialog);
        okPushButton->setObjectName(QString::fromUtf8("okPushButton"));

        horizontalLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(BoundingBoxEditorDialog);
        cancelPushButton->setObjectName(QString::fromUtf8("cancelPushButton"));

        horizontalLayout->addWidget(cancelPushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(BoundingBoxEditorDialog);
        QObject::connect(oriZCheckBox, SIGNAL(toggled(bool)), zOriFrame, SLOT(setDisabled(bool)));
        QObject::connect(oriYCheckBox, SIGNAL(toggled(bool)), yOriFrame, SLOT(setDisabled(bool)));
        QObject::connect(oriXCheckBox, SIGNAL(toggled(bool)), xOriFrame, SLOT(setDisabled(bool)));

        pointTypeComboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(BoundingBoxEditorDialog);
    } // setupUi

    void retranslateUi(QDialog *BoundingBoxEditorDialog)
    {
        BoundingBoxEditorDialog->setWindowTitle(QCoreApplication::translate("BoundingBoxEditorDialog", "Bounding Box Editor", nullptr));
        pointTypeComboBox->setItemText(0, QCoreApplication::translate("BoundingBoxEditorDialog", "Min corner", nullptr));
        pointTypeComboBox->setItemText(1, QCoreApplication::translate("BoundingBoxEditorDialog", "Center", nullptr));
        pointTypeComboBox->setItemText(2, QCoreApplication::translate("BoundingBoxEditorDialog", "Max corner", nullptr));

        widthComboBox->setItemText(0, QCoreApplication::translate("BoundingBoxEditorDialog", "Width", nullptr));

        warningLabel->setText(QCoreApplication::translate("BoundingBoxEditorDialog", "Warning, this box doesn't include the cloud bounding-box!", nullptr));
        oriGroupBox->setTitle(QCoreApplication::translate("BoundingBoxEditorDialog", "Orientation", nullptr));
#if QT_CONFIG(tooltip)
        oriZCheckBox->setToolTip(QCoreApplication::translate("BoundingBoxEditorDialog", "automatically compute Z if checked", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        oriYCheckBox->setToolTip(QCoreApplication::translate("BoundingBoxEditorDialog", "automatically compute Y if checked", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        oriXCheckBox->setToolTip(QCoreApplication::translate("BoundingBoxEditorDialog", "automatically compute X if checked", nullptr));
#endif // QT_CONFIG(tooltip)
        fromClipboardPushButton->setText(QCoreApplication::translate("BoundingBoxEditorDialog", "From clipboard", nullptr));
        toClipboardPushButton->setText(QCoreApplication::translate("BoundingBoxEditorDialog", "To clipboard", nullptr));
        keepSquareCheckBox->setText(QCoreApplication::translate("BoundingBoxEditorDialog", "keep square", nullptr));
        defaultPushButton->setText(QCoreApplication::translate("BoundingBoxEditorDialog", "Default", nullptr));
        lastPushButton->setText(QCoreApplication::translate("BoundingBoxEditorDialog", "Last", nullptr));
        okPushButton->setText(QCoreApplication::translate("BoundingBoxEditorDialog", "OK", nullptr));
        cancelPushButton->setText(QCoreApplication::translate("BoundingBoxEditorDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BoundingBoxEditorDialog: public Ui_BoundingBoxEditorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOUNDINGBOXEDITORDLG_H
