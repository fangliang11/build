/********************************************************************************
** Form generated from reading UI file 'pointPairRegistrationDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINTPAIRREGISTRATIONDLG_H
#define UI_POINTPAIRREGISTRATIONDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_pointPairRegistrationDlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *showAlignedCheckBox;
    QToolButton *unstackAlignToolButton;
    QToolButton *typeAlignToolButton;
    QSpacerItem *horizontalSpacer;
    QToolButton *useSphereToolButton;
    QDoubleSpinBox *radiusDoubleSpinBox;
    QSpinBox *maxRmsSpinBox;
    QTableWidget *alignedPointsTableWidget;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *showReferenceCheckBox;
    QToolButton *unstackRefToolButton;
    QToolButton *typeRefToolButton;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *refPointsTableWidget;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *adjustScaleCheckBox;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QComboBox *rotComboBox;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *TxCheckBox;
    QCheckBox *TyCheckBox;
    QCheckBox *TzCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *autoZoomCheckBox;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *alignToolButton;
    QToolButton *resetToolButton;
    QToolButton *validToolButton;
    QToolButton *cancelToolButton;

    void setupUi(QDialog *pointPairRegistrationDlg)
    {
        if (pointPairRegistrationDlg->objectName().isEmpty())
            pointPairRegistrationDlg->setObjectName(QString::fromUtf8("pointPairRegistrationDlg"));
        pointPairRegistrationDlg->resize(508, 380);
        verticalLayout = new QVBoxLayout(pointPairRegistrationDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        showAlignedCheckBox = new QCheckBox(pointPairRegistrationDlg);
        showAlignedCheckBox->setObjectName(QString::fromUtf8("showAlignedCheckBox"));
        showAlignedCheckBox->setStyleSheet(QString::fromUtf8("background-color: red; color: white;"));
        showAlignedCheckBox->setChecked(true);

        horizontalLayout->addWidget(showAlignedCheckBox);

        unstackAlignToolButton = new QToolButton(pointPairRegistrationDlg);
        unstackAlignToolButton->setObjectName(QString::fromUtf8("unstackAlignToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/images/ccUnstack.png"), QSize(), QIcon::Normal, QIcon::Off);
        unstackAlignToolButton->setIcon(icon);

        horizontalLayout->addWidget(unstackAlignToolButton);

        typeAlignToolButton = new QToolButton(pointPairRegistrationDlg);
        typeAlignToolButton->setObjectName(QString::fromUtf8("typeAlignToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/images/ccPencil.png"), QSize(), QIcon::Normal, QIcon::Off);
        typeAlignToolButton->setIcon(icon1);

        horizontalLayout->addWidget(typeAlignToolButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        useSphereToolButton = new QToolButton(pointPairRegistrationDlg);
        useSphereToolButton->setObjectName(QString::fromUtf8("useSphereToolButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CC/images/smallSphere.png"), QSize(), QIcon::Normal, QIcon::Off);
        useSphereToolButton->setIcon(icon2);
        useSphereToolButton->setCheckable(true);

        horizontalLayout->addWidget(useSphereToolButton);

        radiusDoubleSpinBox = new QDoubleSpinBox(pointPairRegistrationDlg);
        radiusDoubleSpinBox->setObjectName(QString::fromUtf8("radiusDoubleSpinBox"));
        radiusDoubleSpinBox->setEnabled(false);
        radiusDoubleSpinBox->setPrefix(QString::fromUtf8("r = "));
        radiusDoubleSpinBox->setDecimals(3);
        radiusDoubleSpinBox->setMinimum(0.001000000000000);
        radiusDoubleSpinBox->setMaximum(1000.000000000000000);
        radiusDoubleSpinBox->setValue(20.000000000000000);

        horizontalLayout->addWidget(radiusDoubleSpinBox);

        maxRmsSpinBox = new QSpinBox(pointPairRegistrationDlg);
        maxRmsSpinBox->setObjectName(QString::fromUtf8("maxRmsSpinBox"));
        maxRmsSpinBox->setEnabled(false);
        maxRmsSpinBox->setSuffix(QString::fromUtf8("%"));
        maxRmsSpinBox->setPrefix(QString::fromUtf8("RMS < "));
        maxRmsSpinBox->setMinimum(1);
        maxRmsSpinBox->setMaximum(100);
        maxRmsSpinBox->setSingleStep(1);
        maxRmsSpinBox->setValue(10);

        horizontalLayout->addWidget(maxRmsSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        alignedPointsTableWidget = new QTableWidget(pointPairRegistrationDlg);
        if (alignedPointsTableWidget->columnCount() < 5)
            alignedPointsTableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setText(QString::fromUtf8("X"));
        alignedPointsTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setText(QString::fromUtf8("Y"));
        alignedPointsTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setText(QString::fromUtf8("Z"));
        alignedPointsTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        alignedPointsTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        alignedPointsTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (alignedPointsTableWidget->rowCount() < 4)
            alignedPointsTableWidget->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setText(QString::fromUtf8("1"));
        alignedPointsTableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setText(QString::fromUtf8("2"));
        alignedPointsTableWidget->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setText(QString::fromUtf8("3"));
        alignedPointsTableWidget->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setText(QString::fromUtf8("4"));
        alignedPointsTableWidget->setVerticalHeaderItem(3, __qtablewidgetitem8);
        alignedPointsTableWidget->setObjectName(QString::fromUtf8("alignedPointsTableWidget"));
        alignedPointsTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        alignedPointsTableWidget->setProperty("showDropIndicator", QVariant(false));
        alignedPointsTableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        alignedPointsTableWidget->horizontalHeader()->setDefaultSectionSize(80);
        alignedPointsTableWidget->verticalHeader()->setDefaultSectionSize(18);

        verticalLayout->addWidget(alignedPointsTableWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        showReferenceCheckBox = new QCheckBox(pointPairRegistrationDlg);
        showReferenceCheckBox->setObjectName(QString::fromUtf8("showReferenceCheckBox"));
        showReferenceCheckBox->setStyleSheet(QString::fromUtf8("background-color: yellow;"));
        showReferenceCheckBox->setChecked(true);

        horizontalLayout_3->addWidget(showReferenceCheckBox);

        unstackRefToolButton = new QToolButton(pointPairRegistrationDlg);
        unstackRefToolButton->setObjectName(QString::fromUtf8("unstackRefToolButton"));
        unstackRefToolButton->setIcon(icon);

        horizontalLayout_3->addWidget(unstackRefToolButton);

        typeRefToolButton = new QToolButton(pointPairRegistrationDlg);
        typeRefToolButton->setObjectName(QString::fromUtf8("typeRefToolButton"));
        typeRefToolButton->setIcon(icon1);

        horizontalLayout_3->addWidget(typeRefToolButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        refPointsTableWidget = new QTableWidget(pointPairRegistrationDlg);
        if (refPointsTableWidget->columnCount() < 5)
            refPointsTableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setText(QString::fromUtf8("X"));
        refPointsTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setText(QString::fromUtf8("Y"));
        refPointsTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setText(QString::fromUtf8("Z"));
        refPointsTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        refPointsTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        refPointsTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem13);
        if (refPointsTableWidget->rowCount() < 4)
            refPointsTableWidget->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setText(QString::fromUtf8("1"));
        refPointsTableWidget->setVerticalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setText(QString::fromUtf8("2"));
        refPointsTableWidget->setVerticalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setText(QString::fromUtf8("3"));
        refPointsTableWidget->setVerticalHeaderItem(2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setText(QString::fromUtf8("4"));
        refPointsTableWidget->setVerticalHeaderItem(3, __qtablewidgetitem17);
        refPointsTableWidget->setObjectName(QString::fromUtf8("refPointsTableWidget"));
        refPointsTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        refPointsTableWidget->setProperty("showDropIndicator", QVariant(false));
        refPointsTableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        refPointsTableWidget->horizontalHeader()->setDefaultSectionSize(80);
        refPointsTableWidget->verticalHeader()->setDefaultSectionSize(18);

        verticalLayout->addWidget(refPointsTableWidget);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        adjustScaleCheckBox = new QCheckBox(pointPairRegistrationDlg);
        adjustScaleCheckBox->setObjectName(QString::fromUtf8("adjustScaleCheckBox"));

        horizontalLayout_4->addWidget(adjustScaleCheckBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        label = new QLabel(pointPairRegistrationDlg);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label);

        rotComboBox = new QComboBox(pointPairRegistrationDlg);
        rotComboBox->addItem(QString::fromUtf8("XYZ"));
        rotComboBox->addItem(QString::fromUtf8("X"));
        rotComboBox->addItem(QString::fromUtf8("Y"));
        rotComboBox->addItem(QString::fromUtf8("Z"));
        rotComboBox->setObjectName(QString::fromUtf8("rotComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(rotComboBox->sizePolicy().hasHeightForWidth());
        rotComboBox->setSizePolicy(sizePolicy1);
        rotComboBox->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_4->addWidget(rotComboBox);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        TxCheckBox = new QCheckBox(pointPairRegistrationDlg);
        TxCheckBox->setObjectName(QString::fromUtf8("TxCheckBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(TxCheckBox->sizePolicy().hasHeightForWidth());
        TxCheckBox->setSizePolicy(sizePolicy2);
        TxCheckBox->setText(QString::fromUtf8("Tx"));
        TxCheckBox->setChecked(true);

        horizontalLayout_4->addWidget(TxCheckBox);

        TyCheckBox = new QCheckBox(pointPairRegistrationDlg);
        TyCheckBox->setObjectName(QString::fromUtf8("TyCheckBox"));
        sizePolicy2.setHeightForWidth(TyCheckBox->sizePolicy().hasHeightForWidth());
        TyCheckBox->setSizePolicy(sizePolicy2);
        TyCheckBox->setText(QString::fromUtf8("Ty"));
        TyCheckBox->setChecked(true);

        horizontalLayout_4->addWidget(TyCheckBox);

        TzCheckBox = new QCheckBox(pointPairRegistrationDlg);
        TzCheckBox->setObjectName(QString::fromUtf8("TzCheckBox"));
        sizePolicy2.setHeightForWidth(TzCheckBox->sizePolicy().hasHeightForWidth());
        TzCheckBox->setSizePolicy(sizePolicy2);
        TzCheckBox->setText(QString::fromUtf8("Tz"));
        TzCheckBox->setChecked(true);

        horizontalLayout_4->addWidget(TzCheckBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        autoZoomCheckBox = new QCheckBox(pointPairRegistrationDlg);
        autoZoomCheckBox->setObjectName(QString::fromUtf8("autoZoomCheckBox"));
        autoZoomCheckBox->setChecked(true);

        horizontalLayout_2->addWidget(autoZoomCheckBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        alignToolButton = new QToolButton(pointPairRegistrationDlg);
        alignToolButton->setObjectName(QString::fromUtf8("alignToolButton"));
        alignToolButton->setEnabled(false);
        alignToolButton->setMinimumSize(QSize(0, 22));

        horizontalLayout_2->addWidget(alignToolButton);

        resetToolButton = new QToolButton(pointPairRegistrationDlg);
        resetToolButton->setObjectName(QString::fromUtf8("resetToolButton"));
        resetToolButton->setEnabled(false);

        horizontalLayout_2->addWidget(resetToolButton);

        validToolButton = new QToolButton(pointPairRegistrationDlg);
        validToolButton->setObjectName(QString::fromUtf8("validToolButton"));
        validToolButton->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/CC/images/smallValidate.png"), QSize(), QIcon::Normal, QIcon::Off);
        validToolButton->setIcon(icon3);

        horizontalLayout_2->addWidget(validToolButton);

        cancelToolButton = new QToolButton(pointPairRegistrationDlg);
        cancelToolButton->setObjectName(QString::fromUtf8("cancelToolButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/CC/images/smallCancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelToolButton->setIcon(icon4);

        horizontalLayout_2->addWidget(cancelToolButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(pointPairRegistrationDlg);
        QObject::connect(showReferenceCheckBox, SIGNAL(toggled(bool)), unstackRefToolButton, SLOT(setEnabled(bool)));
        QObject::connect(showAlignedCheckBox, SIGNAL(toggled(bool)), unstackAlignToolButton, SLOT(setEnabled(bool)));
        QObject::connect(useSphereToolButton, SIGNAL(toggled(bool)), radiusDoubleSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(useSphereToolButton, SIGNAL(toggled(bool)), maxRmsSpinBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(pointPairRegistrationDlg);
    } // setupUi

    void retranslateUi(QDialog *pointPairRegistrationDlg)
    {
        pointPairRegistrationDlg->setWindowTitle(QCoreApplication::translate("pointPairRegistrationDlg", "Point list picking", nullptr));
        showAlignedCheckBox->setText(QCoreApplication::translate("pointPairRegistrationDlg", "show 'to align' entities", nullptr));
#if QT_CONFIG(tooltip)
        useSphereToolButton->setToolTip(QCoreApplication::translate("pointPairRegistrationDlg", "Pick spheres instead of single points (for clouds only)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        radiusDoubleSpinBox->setToolTip(QCoreApplication::translate("pointPairRegistrationDlg", "search radius (or the spheres radius if you know it)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        maxRmsSpinBox->setToolTip(QCoreApplication::translate("pointPairRegistrationDlg", "Max RMS (as a percentage of the radius)", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem = alignedPointsTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem->setText(QCoreApplication::translate("pointPairRegistrationDlg", "Error", nullptr));
        showReferenceCheckBox->setText(QCoreApplication::translate("pointPairRegistrationDlg", "show 'reference' entities", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = refPointsTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("pointPairRegistrationDlg", "Error", nullptr));
        adjustScaleCheckBox->setText(QCoreApplication::translate("pointPairRegistrationDlg", "adjust scale", nullptr));
        label->setText(QCoreApplication::translate("pointPairRegistrationDlg", "Rotation", nullptr));

#if QT_CONFIG(tooltip)
        rotComboBox->setToolTip(QCoreApplication::translate("pointPairRegistrationDlg", "Constrains the rotation around a single axis (warning: experimental)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        TxCheckBox->setToolTip(QCoreApplication::translate("pointPairRegistrationDlg", "Constrains the translation along particular axes (warning: experimental)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        TyCheckBox->setToolTip(QCoreApplication::translate("pointPairRegistrationDlg", "Constrains the translation along particular axes (warning: experimental)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        TzCheckBox->setToolTip(QCoreApplication::translate("pointPairRegistrationDlg", "Constrains the translation along particular axes (warning: experimental)", nullptr));
#endif // QT_CONFIG(tooltip)
        autoZoomCheckBox->setText(QCoreApplication::translate("pointPairRegistrationDlg", "auto update zoom", nullptr));
        alignToolButton->setText(QCoreApplication::translate("pointPairRegistrationDlg", "align", nullptr));
        resetToolButton->setText(QCoreApplication::translate("pointPairRegistrationDlg", "reset", nullptr));
#if QT_CONFIG(statustip)
        validToolButton->setStatusTip(QCoreApplication::translate("pointPairRegistrationDlg", "Convert list to new cloud (and close dialog)", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        validToolButton->setWhatsThis(QCoreApplication::translate("pointPairRegistrationDlg", "Convert list to new cloud (and close dialog)", nullptr));
#endif // QT_CONFIG(whatsthis)
        validToolButton->setText(QCoreApplication::translate("pointPairRegistrationDlg", "to cloud", nullptr));
#if QT_CONFIG(tooltip)
        cancelToolButton->setToolTip(QCoreApplication::translate("pointPairRegistrationDlg", "Close dialog (list will be lost)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cancelToolButton->setStatusTip(QCoreApplication::translate("pointPairRegistrationDlg", "Close dialog (list will be lost)", nullptr));
#endif // QT_CONFIG(statustip)
        cancelToolButton->setText(QCoreApplication::translate("pointPairRegistrationDlg", "stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pointPairRegistrationDlg: public Ui_pointPairRegistrationDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINTPAIRREGISTRATIONDLG_H
