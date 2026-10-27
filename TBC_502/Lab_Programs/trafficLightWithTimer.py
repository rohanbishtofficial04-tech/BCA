import time


class TrafficLightAgent:
    def __init__(self):
        self.state = "Red"
        self.timer = 0
        self.last_changed = time.time()

    def perceive(self, action):
        if action == "Go":
            self.state = "Green"
        elif action == "Wait":
            self.state = "Yellow"
        elif action == "Stop":
            self.state = "Red"
        self.last_changed = time.time()
        self.timer = 0

    def update_timer(self):
        self.timer = int(time.time() - self.last_changed)

    def status(self):
        self.update_timer()
        return f"Traffic Light Is {self.state}"

    def action_message(self):
        if self.state == "Green":
            return "Action: Go"
        elif self.state == "Yellow":
            return "Action: Wait"
        elif self.state == "Red":
            return "Action: Stop"


agent = TrafficLightAgent()
actions = ["Go", "Wait", "Stop"]

while True:
    for action in actions:
        agent.perceive(action)
        print(agent.status())
        print(agent.action_message())
        time.sleep(5)
