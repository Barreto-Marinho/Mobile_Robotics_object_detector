import numpy as np
import cv2

class TrajRollout:
    
    def __init__(self,DynamicWindowNumVxSamples, DynamicWindowNumWSamples,DynamicWindowVxLims, DynamicWindowVthetaLims, DynamicWindowAxLims,
                 DynamicWindowAthetaLims, DynamicWindowTime, RolloutSampleTime):

                self.DynamicWindowNumVxSamples= DynamicWindowNumVxSamples
                self.DynamicWindowNumWSamples = DynamicWindowNumWSamples
                self.DynamicWindowVxLims = DynamicWindowVxLims
                self.DynamicWindowVthetaLims = DynamicWindowVthetaLims
                self.DynamicWindowAxLims = DynamicWindowAxLims
                self.DynamicWindowAthetaLims = DynamicWindowAthetaLims
                self.RolloutSampleTime = RolloutSampleTime
                self.DynamicWindowTime = DynamicWindowTime
    
    def calcDynamicWindow(self, rdxi):
        # rdxi = twist robot [vx , vy, w]

        delta_t = self.DynamicWindowTime

        V_max_x = rdxi[0] + self.DynamicWindowAxLims[1] * delta_t
        V_min_x = rdxi[0] + self.DynamicWindowAxLims[0] * delta_t

        W_max = rdxi[2] + self.DynamicWindowAthetaLims[1] * delta_t
        W_min = rdxi[2] - self.DynamicWindowAthetaLims[0] * delta_t


        V_max_x = np.min([V_max_x,self.DynamicWindowVxLims[1]])
        V_min_x = np.max([V_min_x,self.DynamicWindowVxLims[0]])

        W_max = np.min([V_max_x,self.DynamicWindowVthetaLims[1]])
        W_min = np.max([V_min_x,self.DynamicWindowVthetaLims[0]])


        Vx = np.linspace(V_min_x,V_max_x,self.DynamicWindowNumVxSamples)
        Vy = np.linspace(W_min,W_max, self.DynamicWindowNumWSamples)

        [Vx,Vy] = np.meshgrid(Vx,Vy)

        r_dxi_cmds = np.vstack([Vx.flatten(),np.zeros_like(Vx.flatten()),Vy.flatten()])

        return  r_dxi_cmds

traj = TrajRollout(5,5,[-0.26,0.26],[-1.82,1.82],[-2.5, 2.5],[np.pi,np.pi],1, 10**-3)
r_dxi_cmds = traj.calcDynamicWindow([0,0,0])
print(r_dxi_cmds.shape)


        

                

