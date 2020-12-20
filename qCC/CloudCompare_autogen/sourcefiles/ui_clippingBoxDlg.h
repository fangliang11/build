/********************************************************************************
** Form generated from reading UI file 'clippingBoxDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIPPINGBOXDLG_H
#define UI_CLIPPINGBOXDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ClippingBoxDlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *showBoxToolButton;
    QToolButton *showInteractorsToolButton;
    QSpacerItem *horizontalSpacer_9;
    QToolButton *restoreToolButton;
    QToolButton *resetButton;
    QToolButton *closeButton;
    QGroupBox *thicknessGroupBox;
    QFormLayout *formLayout;
    QLabel *label_2;
    QDoubleSpinBox *thickXDoubleSpinBox;
    QLabel *label_3;
    QDoubleSpinBox *thickYDoubleSpinBox;
    QLabel *label_4;
    QDoubleSpinBox *thickZDoubleSpinBox;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_8;
    QToolButton *editBoxToolButton;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QGroupBox *contourGroupBox;
    QHBoxLayout *horizontalLayout;
    QToolButton *extractContourToolButton;
    QToolButton *removeLastContourToolButton;
    QGroupBox *slicesGroupBox;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *exportButton;
    QToolButton *exportMultButton;
    QSpacerItem *horizontalSpacer_6;
    QFrame *viewButtonsFrame;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *viewLeftToolButton;
    QToolButton *viewRightToolButton;
    QToolButton *viewFrontToolButton;
    QToolButton *viewBackToolButton;
    QToolButton *viewDownToolButton;
    QToolButton *viewUpToolButton;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *minusXShiftToolButton;
    QToolButton *plusXShiftToolButton;
    QToolButton *minusYShiftToolButton;
    QToolButton *plusYShiftToolButton;
    QToolButton *minusZShiftToolButton;
    QToolButton *plusZShiftToolButton;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *ClippingBoxDlg)
    {
        if (ClippingBoxDlg->objectName().isEmpty())
            ClippingBoxDlg->setObjectName(QString::fromUtf8("ClippingBoxDlg"));
        ClippingBoxDlg->resize(258, 369);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ClippingBoxDlg->sizePolicy().hasHeightForWidth());
        ClippingBoxDlg->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(ClippingBoxDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        showBoxToolButton = new QToolButton(ClippingBoxDlg);
        showBoxToolButton->setObjectName(QString::fromUtf8("showBoxToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/images/square.png"), QSize(), QIcon::Normal, QIcon::Off);
        showBoxToolButton->setIcon(icon);
        showBoxToolButton->setCheckable(true);
        showBoxToolButton->setChecked(true);
        showBoxToolButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(showBoxToolButton);

        showInteractorsToolButton = new QToolButton(ClippingBoxDlg);
        showInteractorsToolButton->setObjectName(QString::fromUtf8("showInteractorsToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/images/interactors.png"), QSize(), QIcon::Normal, QIcon::Off);
        showInteractorsToolButton->setIcon(icon1);
        showInteractorsToolButton->setCheckable(true);
        showInteractorsToolButton->setChecked(true);
        showInteractorsToolButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(showInteractorsToolButton);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        restoreToolButton = new QToolButton(ClippingBoxDlg);
        restoreToolButton->setObjectName(QString::fromUtf8("restoreToolButton"));
        restoreToolButton->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CC/images/restore.png"), QSize(), QIcon::Normal, QIcon::Off);
        restoreToolButton->setIcon(icon2);

        horizontalLayout_2->addWidget(restoreToolButton);

        resetButton = new QToolButton(ClippingBoxDlg);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setMinimumSize(QSize(25, 25));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/CC/images/smallReset.png"), QSize(), QIcon::Normal, QIcon::Off);
        resetButton->setIcon(icon3);

        horizontalLayout_2->addWidget(resetButton);

        closeButton = new QToolButton(ClippingBoxDlg);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setMinimumSize(QSize(25, 25));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/CC/images/smallCancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon4);

        horizontalLayout_2->addWidget(closeButton);


        verticalLayout->addLayout(horizontalLayout_2);

        thicknessGroupBox = new QGroupBox(ClippingBoxDlg);
        thicknessGroupBox->setObjectName(QString::fromUtf8("thicknessGroupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(thicknessGroupBox->sizePolicy().hasHeightForWidth());
        thicknessGroupBox->setSizePolicy(sizePolicy1);
        formLayout = new QFormLayout(thicknessGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(thicknessGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setText(QString::fromUtf8("X"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        thickXDoubleSpinBox = new QDoubleSpinBox(thicknessGroupBox);
        thickXDoubleSpinBox->setObjectName(QString::fromUtf8("thickXDoubleSpinBox"));
        thickXDoubleSpinBox->setDecimals(8);
        thickXDoubleSpinBox->setMaximum(1000000000.000000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, thickXDoubleSpinBox);

        label_3 = new QLabel(thicknessGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setText(QString::fromUtf8("Y"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        thickYDoubleSpinBox = new QDoubleSpinBox(thicknessGroupBox);
        thickYDoubleSpinBox->setObjectName(QString::fromUtf8("thickYDoubleSpinBox"));
        thickYDoubleSpinBox->setDecimals(8);
        thickYDoubleSpinBox->setMaximum(1000000000.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, thickYDoubleSpinBox);

        label_4 = new QLabel(thicknessGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setText(QString::fromUtf8("Z"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        thickZDoubleSpinBox = new QDoubleSpinBox(thicknessGroupBox);
        thickZDoubleSpinBox->setObjectName(QString::fromUtf8("thickZDoubleSpinBox"));
        thickZDoubleSpinBox->setDecimals(8);
        thickZDoubleSpinBox->setMaximum(1000000000.000000000000000);

        formLayout->setWidget(2, QFormLayout::FieldRole, thickZDoubleSpinBox);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        editBoxToolButton = new QToolButton(thicknessGroupBox);
        editBoxToolButton->setObjectName(QString::fromUtf8("editBoxToolButton"));

        horizontalLayout_6->addWidget(editBoxToolButton);


        formLayout->setLayout(3, QFormLayout::SpanningRole, horizontalLayout_6);


        verticalLayout->addWidget(thicknessGroupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        contourGroupBox = new QGroupBox(ClippingBoxDlg);
        contourGroupBox->setObjectName(QString::fromUtf8("contourGroupBox"));
        horizontalLayout = new QHBoxLayout(contourGroupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        extractContourToolButton = new QToolButton(contourGroupBox);
        extractContourToolButton->setObjectName(QString::fromUtf8("extractContourToolButton"));
        extractContourToolButton->setMinimumSize(QSize(25, 25));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/CC/images/smallPolygonSelect.png"), QSize(), QIcon::Normal, QIcon::Off);
        extractContourToolButton->setIcon(icon5);

        horizontalLayout->addWidget(extractContourToolButton);

        removeLastContourToolButton = new QToolButton(contourGroupBox);
        removeLastContourToolButton->setObjectName(QString::fromUtf8("removeLastContourToolButton"));
        removeLastContourToolButton->setMinimumSize(QSize(25, 25));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/CC/images/smallRevert.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeLastContourToolButton->setIcon(icon6);

        horizontalLayout->addWidget(removeLastContourToolButton);


        horizontalLayout_3->addWidget(contourGroupBox);

        slicesGroupBox = new QGroupBox(ClippingBoxDlg);
        slicesGroupBox->setObjectName(QString::fromUtf8("slicesGroupBox"));
        horizontalLayout_5 = new QHBoxLayout(slicesGroupBox);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(4, 4, 4, 4);
        exportButton = new QToolButton(slicesGroupBox);
        exportButton->setObjectName(QString::fromUtf8("exportButton"));
        exportButton->setMinimumSize(QSize(25, 25));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/CC/images/ccClippingBoxSingleExport.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportButton->setIcon(icon7);

        horizontalLayout_5->addWidget(exportButton);

        exportMultButton = new QToolButton(slicesGroupBox);
        exportMultButton->setObjectName(QString::fromUtf8("exportMultButton"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/CC/images/ccClippingBoxMultExport.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportMultButton->setIcon(icon8);

        horizontalLayout_5->addWidget(exportMultButton);


        horizontalLayout_3->addWidget(slicesGroupBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);

        viewButtonsFrame = new QFrame(ClippingBoxDlg);
        viewButtonsFrame->setObjectName(QString::fromUtf8("viewButtonsFrame"));
        sizePolicy1.setHeightForWidth(viewButtonsFrame->sizePolicy().hasHeightForWidth());
        viewButtonsFrame->setSizePolicy(sizePolicy1);
        viewButtonsFrame->setFrameShape(QFrame::NoFrame);
        horizontalLayout_8 = new QHBoxLayout(viewButtonsFrame);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        viewLeftToolButton = new QToolButton(viewButtonsFrame);
        viewLeftToolButton->setObjectName(QString::fromUtf8("viewLeftToolButton"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/CC/images/ccViewXpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewLeftToolButton->setIcon(icon9);

        horizontalLayout_8->addWidget(viewLeftToolButton);

        viewRightToolButton = new QToolButton(viewButtonsFrame);
        viewRightToolButton->setObjectName(QString::fromUtf8("viewRightToolButton"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/CC/images/ccViewXneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewRightToolButton->setIcon(icon10);

        horizontalLayout_8->addWidget(viewRightToolButton);

        viewFrontToolButton = new QToolButton(viewButtonsFrame);
        viewFrontToolButton->setObjectName(QString::fromUtf8("viewFrontToolButton"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/CC/images/ccViewYpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewFrontToolButton->setIcon(icon11);

        horizontalLayout_8->addWidget(viewFrontToolButton);

        viewBackToolButton = new QToolButton(viewButtonsFrame);
        viewBackToolButton->setObjectName(QString::fromUtf8("viewBackToolButton"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/CC/images/ccViewYneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewBackToolButton->setIcon(icon12);

        horizontalLayout_8->addWidget(viewBackToolButton);

        viewDownToolButton = new QToolButton(viewButtonsFrame);
        viewDownToolButton->setObjectName(QString::fromUtf8("viewDownToolButton"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/CC/images/ccViewZneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewDownToolButton->setIcon(icon13);

        horizontalLayout_8->addWidget(viewDownToolButton);

        viewUpToolButton = new QToolButton(viewButtonsFrame);
        viewUpToolButton->setObjectName(QString::fromUtf8("viewUpToolButton"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/CC/images/ccViewZpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewUpToolButton->setIcon(icon14);

        horizontalLayout_8->addWidget(viewUpToolButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);


        verticalLayout->addWidget(viewButtonsFrame);

        groupBox = new QGroupBox(ClippingBoxDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(4, 4, 4, 4);
        horizontalSpacer_2 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        minusXShiftToolButton = new QToolButton(groupBox);
        minusXShiftToolButton->setObjectName(QString::fromUtf8("minusXShiftToolButton"));
        sizePolicy.setHeightForWidth(minusXShiftToolButton->sizePolicy().hasHeightForWidth());
        minusXShiftToolButton->setSizePolicy(sizePolicy);
        minusXShiftToolButton->setMinimumSize(QSize(25, 25));
        minusXShiftToolButton->setText(QString::fromUtf8("-X"));

        horizontalLayout_4->addWidget(minusXShiftToolButton);

        plusXShiftToolButton = new QToolButton(groupBox);
        plusXShiftToolButton->setObjectName(QString::fromUtf8("plusXShiftToolButton"));
        sizePolicy.setHeightForWidth(plusXShiftToolButton->sizePolicy().hasHeightForWidth());
        plusXShiftToolButton->setSizePolicy(sizePolicy);
        plusXShiftToolButton->setMinimumSize(QSize(25, 25));
        plusXShiftToolButton->setText(QString::fromUtf8("+X"));

        horizontalLayout_4->addWidget(plusXShiftToolButton);

        minusYShiftToolButton = new QToolButton(groupBox);
        minusYShiftToolButton->setObjectName(QString::fromUtf8("minusYShiftToolButton"));
        sizePolicy.setHeightForWidth(minusYShiftToolButton->sizePolicy().hasHeightForWidth());
        minusYShiftToolButton->setSizePolicy(sizePolicy);
        minusYShiftToolButton->setMinimumSize(QSize(25, 25));
        minusYShiftToolButton->setText(QString::fromUtf8("-Y"));

        horizontalLayout_4->addWidget(minusYShiftToolButton);

        plusYShiftToolButton = new QToolButton(groupBox);
        plusYShiftToolButton->setObjectName(QString::fromUtf8("plusYShiftToolButton"));
        sizePolicy.setHeightForWidth(plusYShiftToolButton->sizePolicy().hasHeightForWidth());
        plusYShiftToolButton->setSizePolicy(sizePolicy);
        plusYShiftToolButton->setMinimumSize(QSize(25, 25));
        plusYShiftToolButton->setText(QString::fromUtf8("+Y"));

        horizontalLayout_4->addWidget(plusYShiftToolButton);

        minusZShiftToolButton = new QToolButton(groupBox);
        minusZShiftToolButton->setObjectName(QString::fromUtf8("minusZShiftToolButton"));
        sizePolicy.setHeightForWidth(minusZShiftToolButton->sizePolicy().hasHeightForWidth());
        minusZShiftToolButton->setSizePolicy(sizePolicy);
        minusZShiftToolButton->setMinimumSize(QSize(25, 25));
        minusZShiftToolButton->setText(QString::fromUtf8("-Z"));

        horizontalLayout_4->addWidget(minusZShiftToolButton);

        plusZShiftToolButton = new QToolButton(groupBox);
        plusZShiftToolButton->setObjectName(QString::fromUtf8("plusZShiftToolButton"));
        sizePolicy.setHeightForWidth(plusZShiftToolButton->sizePolicy().hasHeightForWidth());
        plusZShiftToolButton->setSizePolicy(sizePolicy);
        plusZShiftToolButton->setMinimumSize(QSize(25, 25));
        plusZShiftToolButton->setText(QString::fromUtf8("+Z"));

        horizontalLayout_4->addWidget(plusZShiftToolButton);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(groupBox);


        retranslateUi(ClippingBoxDlg);

        QMetaObject::connectSlotsByName(ClippingBoxDlg);
    } // setupUi

    void retranslateUi(QDialog *ClippingBoxDlg)
    {
        ClippingBoxDlg->setWindowTitle(QCoreApplication::translate("ClippingBoxDlg", "Clipping Box", nullptr));
#if QT_CONFIG(tooltip)
        showBoxToolButton->setToolTip(QCoreApplication::translate("ClippingBoxDlg", "Show/hide bounding box", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        showInteractorsToolButton->setToolTip(QCoreApplication::translate("ClippingBoxDlg", "Show/hide interactors", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        restoreToolButton->setToolTip(QCoreApplication::translate("ClippingBoxDlg", "Restore the last clipping box used with this cloud", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        resetButton->setToolTip(QCoreApplication::translate("ClippingBoxDlg", "Reset", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        resetButton->setStatusTip(QCoreApplication::translate("ClippingBoxDlg", "Reset", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        closeButton->setToolTip(QCoreApplication::translate("ClippingBoxDlg", "Close", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        closeButton->setStatusTip(QCoreApplication::translate("ClippingBoxDlg", "Close", nullptr));
#endif // QT_CONFIG(statustip)
        thicknessGroupBox->setTitle(QCoreApplication::translate("ClippingBoxDlg", "Box thickness", nullptr));
        editBoxToolButton->setText(QCoreApplication::translate("ClippingBoxDlg", "advanced", nullptr));
        contourGroupBox->setTitle(QCoreApplication::translate("ClippingBoxDlg", "Contour", nullptr));
#if QT_CONFIG(tooltip)
        extractContourToolButton->setToolTip(QCoreApplication::translate("ClippingBoxDlg", "Extracts the contour as a polyline (concave hull)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        extractContourToolButton->setStatusTip(QCoreApplication::translate("ClippingBoxDlg", "Extracts the contour as a polyline (concave hull)", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        removeLastContourToolButton->setToolTip(QCoreApplication::translate("ClippingBoxDlg", "Removes last extracted contour", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        removeLastContourToolButton->setStatusTip(QCoreApplication::translate("ClippingBoxDlg", "Removes last extracted contour", nullptr));
#endif // QT_CONFIG(statustip)
        slicesGroupBox->setTitle(QCoreApplication::translate("ClippingBoxDlg", "Slices", nullptr));
#if QT_CONFIG(tooltip)
        exportButton->setToolTip(QCoreApplication::translate("ClippingBoxDlg", "Export selection as a new cloud", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        exportButton->setStatusTip(QCoreApplication::translate("ClippingBoxDlg", "Export selection as a new cloud", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        exportMultButton->setToolTip(QCoreApplication::translate("ClippingBoxDlg", "Export multiple slices by repeating the process along one or several dimensions (+ contour extraction)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        viewLeftToolButton->setToolTip(QCoreApplication::translate("ClippingBoxDlg", "Set 'left' view", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewLeftToolButton->setStatusTip(QCoreApplication::translate("ClippingBoxDlg", "Set 'left' view", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        viewRightToolButton->setToolTip(QCoreApplication::translate("ClippingBoxDlg", "Set 'right' view", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewRightToolButton->setStatusTip(QCoreApplication::translate("ClippingBoxDlg", "Set 'right' view", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        viewFrontToolButton->setToolTip(QCoreApplication::translate("ClippingBoxDlg", "Set 'front' view", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewFrontToolButton->setStatusTip(QCoreApplication::translate("ClippingBoxDlg", "Set 'front' view", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        viewBackToolButton->setToolTip(QCoreApplication::translate("ClippingBoxDlg", "Set 'back' view", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewBackToolButton->setStatusTip(QCoreApplication::translate("ClippingBoxDlg", "Set 'back' view", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        viewDownToolButton->setToolTip(QCoreApplication::translate("ClippingBoxDlg", "Set 'down' view", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewDownToolButton->setStatusTip(QCoreApplication::translate("ClippingBoxDlg", "Set 'down' view", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        viewUpToolButton->setToolTip(QCoreApplication::translate("ClippingBoxDlg", "Set 'up' view", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewUpToolButton->setStatusTip(QCoreApplication::translate("ClippingBoxDlg", "Set 'up' view", nullptr));
#endif // QT_CONFIG(statustip)
        groupBox->setTitle(QCoreApplication::translate("ClippingBoxDlg", "Shift box", nullptr));
#if QT_CONFIG(tooltip)
        minusXShiftToolButton->setToolTip(QCoreApplication::translate("ClippingBoxDlg", "Shift box along its X dimension", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        plusXShiftToolButton->setToolTip(QCoreApplication::translate("ClippingBoxDlg", "Shift box along its X dimension", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        minusYShiftToolButton->setToolTip(QCoreApplication::translate("ClippingBoxDlg", "Shift box along its Y dimension", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        plusYShiftToolButton->setToolTip(QCoreApplication::translate("ClippingBoxDlg", "Shift box along its Y dimension", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        minusZShiftToolButton->setToolTip(QCoreApplication::translate("ClippingBoxDlg", "Shift box along its Z dimension", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        plusZShiftToolButton->setToolTip(QCoreApplication::translate("ClippingBoxDlg", "Shift box along its Z dimension", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class ClippingBoxDlg: public Ui_ClippingBoxDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIPPINGBOXDLG_H
