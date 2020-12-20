/********************************************************************************
** Form generated from reading UI file 'primitiveDistanceDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIMITIVEDISTANCEDLG_H
#define UI_PRIMITIVEDISTANCEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_primitiveDistanceDlg
{
public:
    QLabel *label;
    QCheckBox *signedDistCheckBox;
    QCheckBox *flipNormalsCheckBox;
    QWidget *layoutWidget;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QCheckBox *treatPlanesAsBoundedCheckBox;

    void setupUi(QDialog *primitiveDistanceDlg)
    {
        if (primitiveDistanceDlg->objectName().isEmpty())
            primitiveDistanceDlg->setObjectName(QString::fromUtf8("primitiveDistanceDlg"));
        primitiveDistanceDlg->resize(450, 312);
        label = new QLabel(primitiveDistanceDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 351, 91));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);
        signedDistCheckBox = new QCheckBox(primitiveDistanceDlg);
        signedDistCheckBox->setObjectName(QString::fromUtf8("signedDistCheckBox"));
        signedDistCheckBox->setGeometry(QRect(30, 140, 102, 17));
        flipNormalsCheckBox = new QCheckBox(primitiveDistanceDlg);
        flipNormalsCheckBox->setObjectName(QString::fromUtf8("flipNormalsCheckBox"));
        flipNormalsCheckBox->setEnabled(false);
        flipNormalsCheckBox->setGeometry(QRect(140, 140, 131, 17));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(flipNormalsCheckBox->sizePolicy().hasHeightForWidth());
        flipNormalsCheckBox->setSizePolicy(sizePolicy);
        layoutWidget = new QWidget(primitiveDistanceDlg);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(4, 270, 371, 30));
        hboxLayout = new QHBoxLayout(layoutWidget);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(layoutWidget);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setEnabled(true);

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(cancelButton);

        treatPlanesAsBoundedCheckBox = new QCheckBox(primitiveDistanceDlg);
        treatPlanesAsBoundedCheckBox->setObjectName(QString::fromUtf8("treatPlanesAsBoundedCheckBox"));
        treatPlanesAsBoundedCheckBox->setEnabled(true);
        treatPlanesAsBoundedCheckBox->setGeometry(QRect(30, 110, 151, 17));

        retranslateUi(primitiveDistanceDlg);

        QMetaObject::connectSlotsByName(primitiveDistanceDlg);
    } // setupUi

    void retranslateUi(QDialog *primitiveDistanceDlg)
    {
        primitiveDistanceDlg->setWindowTitle(QCoreApplication::translate("primitiveDistanceDlg", "Distance to Primitive", nullptr));
        label->setText(QCoreApplication::translate("primitiveDistanceDlg", "<html><head/><body><p>[NOTE]: This tool will measure each clouds points to either a plane, box, sphere, cylinder, or cone.</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        signedDistCheckBox->setToolTip(QCoreApplication::translate("primitiveDistanceDlg", "compute signed distances", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        signedDistCheckBox->setStatusTip(QCoreApplication::translate("primitiveDistanceDlg", "compute signed distances", nullptr));
#endif // QT_CONFIG(statustip)
        signedDistCheckBox->setText(QCoreApplication::translate("primitiveDistanceDlg", "signed distances", nullptr));
        flipNormalsCheckBox->setText(QCoreApplication::translate("primitiveDistanceDlg", "flip normals", nullptr));
        okButton->setText(QCoreApplication::translate("primitiveDistanceDlg", "Ok", nullptr));
        cancelButton->setText(QCoreApplication::translate("primitiveDistanceDlg", "Cancel", nullptr));
#if QT_CONFIG(tooltip)
        treatPlanesAsBoundedCheckBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        treatPlanesAsBoundedCheckBox->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        treatPlanesAsBoundedCheckBox->setText(QCoreApplication::translate("primitiveDistanceDlg", "Treat planes as bounded", nullptr));
    } // retranslateUi

};

namespace Ui {
    class primitiveDistanceDlg: public Ui_primitiveDistanceDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIMITIVEDISTANCEDLG_H
