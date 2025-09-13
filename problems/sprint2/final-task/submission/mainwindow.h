#pragma once

#include "calculator.h"

#include <QMainWindow>

enum Operation {
    NO_OPERATION,
    ADDITION,
    SUBTRACTION,
    MULTIPLICATION,
    DIVISION,
    POWER
};

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

private slots:

    void on_tb_zero_clicked();
    void on_tb_one_clicked();
    void on_tb_two_clicked();
    void on_tb_three_clicked();
    void on_tb_four_clicked();
    void on_tb_five_clicked();
    void on_tb_six_clicked();
    void on_tb_seven_clicked();
    void on_tb_eight_clicked();
    void on_tb_nine_clicked();

    void on_tb_comma_clicked();

    void on_tb_negate_clicked();

    void on_tb_backspace_clicked();

    void on_tb_power_clicked();
    void on_tb_divide_clicked();
    void on_tb_multiplicate_clicked();
    void on_tb_substract_clicked();
    void on_tb_add_clicked();

    void on_tb_equal_clicked();

    void on_tb_reset_clicked();

    void on_tb_ms_clicked();
    void on_tb_mc_clicked();
    void on_tb_mr_clicked();

private:
    Ui::MainWindow* ui;
    Calculator calculator_;
    Operation current_operation_ = Operation::NO_OPERATION;
    QString input_number_;
    Number active_number_ = 0.;
    Number memory_number_ = 0.;
    bool is_memory_num_ = false;

    void SetText(const QString& text);
    void AddText(const QString& suffix);
    void SetOperation(Operation op);
};
