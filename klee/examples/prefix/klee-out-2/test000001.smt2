(set-logic QF_AUFBV )
(declare-fun a () (Array (_ BitVec 32) (_ BitVec 8) ) )
(assert (=  (_ bv0 8) (select  a (_ bv9 32) ) ) )
(check-sat)
(exit)
