/********************************************************************************
** Form generated from reading UI file 'renderToFileDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENDERTOFILEDIALOG_H
#define UI_RENDERTOFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RenderToFileDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLineEdit *filenameLineEdit;
    QToolButton *chooseFileButton;
    QHBoxLayout *hboxLayout1;
    QLabel *label_2;
    QDoubleSpinBox *zoomDoubleSpinBox;
    QLabel *label_3;
    QLabel *finalSizeLabel;
    QSpacerItem *spacerItem;
    QCheckBox *dontScaleFeaturesCheckBox;
    QCheckBox *renderOverlayItemsCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RenderToFileDialog)
    {
        if (RenderToFileDialog->objectName().isEmpty())
            RenderToFileDialog->setObjectName(QString::fromUtf8("RenderToFileDialog"));
        RenderToFileDialog->resize(425, 165);
        vboxLayout = new QVBoxLayout(RenderToFileDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(RenderToFileDialog);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        filenameLineEdit = new QLineEdit(RenderToFileDialog);
        filenameLineEdit->setObjectName(QString::fromUtf8("filenameLineEdit"));

        hboxLayout->addWidget(filenameLineEdit);

        chooseFileButton = new QToolButton(RenderToFileDialog);
        chooseFileButton->setObjectName(QString::fromUtf8("chooseFileButton"));
        chooseFileButton->setText(QString::fromUtf8("..."));

        hboxLayout->addWidget(chooseFileButton);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_2 = new QLabel(RenderToFileDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout1->addWidget(label_2);

        zoomDoubleSpinBox = new QDoubleSpinBox(RenderToFileDialog);
        zoomDoubleSpinBox->setObjectName(QString::fromUtf8("zoomDoubleSpinBox"));
        zoomDoubleSpinBox->setMinimum(1.000000000000000);
        zoomDoubleSpinBox->setMaximum(100.000000000000000);

        hboxLayout1->addWidget(zoomDoubleSpinBox);

        label_3 = new QLabel(RenderToFileDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout1->addWidget(label_3);

        finalSizeLabel = new QLabel(RenderToFileDialog);
        finalSizeLabel->setObjectName(QString::fromUtf8("finalSizeLabel"));
        finalSizeLabel->setText(QString::fromUtf8("(? x ?)"));

        hboxLayout1->addWidget(finalSizeLabel);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);


        vboxLayout->addLayout(hboxLayout1);

        dontScaleFeaturesCheckBox = new QCheckBox(RenderToFileDialog);
        dontScaleFeaturesCheckBox->setObjectName(QString::fromUtf8("dontScaleFeaturesCheckBox"));

        vboxLayout->addWidget(dontScaleFeaturesCheckBox);

        renderOverlayItemsCheckBox = new QCheckBox(RenderToFileDialog);
        renderOverlayItemsCheckBox->setObjectName(QString::fromUtf8("renderOverlayItemsCheckBox"));

        vboxLayout->addWidget(renderOverlayItemsCheckBox);

        buttonBox = new QDialogButtonBox(RenderToFileDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(RenderToFileDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RenderToFileDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RenderToFileDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RenderToFileDialog);
    } // setupUi

    void retranslateUi(QDialog *RenderToFileDialog)
    {
        RenderToFileDialog->setWindowTitle(QCoreApplication::translate("RenderToFileDialog", "Render to file", nullptr));
        label->setText(QCoreApplication::translate("RenderToFileDialog", "File Name", nullptr));
        label_2->setText(QCoreApplication::translate("RenderToFileDialog", "Zoom", nullptr));
        label_3->setText(QCoreApplication::translate("RenderToFileDialog", "Result:", nullptr));
        dontScaleFeaturesCheckBox->setText(QCoreApplication::translate("RenderToFileDialog", "Don't scale features (e.g. points size, lines thickness, text, etc.)", nullptr));
        renderOverlayItemsCheckBox->setText(QCoreApplication::translate("RenderToFileDialog", "Render overlay items (scale, trihedron, etc.)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RenderToFileDialog: public Ui_RenderToFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENDERTOFILEDIALOG_H
