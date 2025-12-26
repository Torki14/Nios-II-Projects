module Hello_Nios (
    input  clk_in
);

    nios_system u0 (
        .clk_clk                          (clk_in)
    );

endmodule