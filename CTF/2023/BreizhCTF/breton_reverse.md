# BreizhCTF - Breton 



![](cfg.png)

```python

import claripy
import sys



project = angr.Project("./breton")
argv = claripy.BVS('argv',8*0x27)
ini_state = project.factory.entry_state(args=["./breton",argv])


ini_state.add_constraints(argv.get_byte(0) == 0x42)
ini_state.add_constraints(argv.get_byte(1) == 0x5A)


simulation = project.factory.simgr(ini_state)
simulation.explore(find=0x04015D8)


if len(simulation.found) > 0:
        for solution_state in simulation.found:
            print("[>>] {!r}".format(solution_state.solver.eval(argv,cast_to=bytes)))
else:
    print("[>>] no solution found :(")
```
